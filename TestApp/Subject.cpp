#include "Subject.h"


int totalEx = 0;

Subject::Subject(std::string name)
{
	this->name = name;
	char current_work_dir[FILENAME_MAX];
	_getcwd(current_work_dir, sizeof(current_work_dir));
	std::string fold = current_work_dir;
	fold += "\\" + name;
	CreateDirectoryA(fold.c_str(), NULL);
	filename = fold + "\\" + name + ".nhk";
	exmCount = 0;
	ifile.open(filename);
	if (ifile)
		read();
	ifile.close();
}


Subject::~Subject()
{
	delete[] exams;
}

std::string Subject::get_name() const
{
	return name;
}

Exam * Subject::get_exam(int i) const
{
	return exams[i];
}

int Subject::get_examCount() const
{
	return exmCount;
}

void Subject::set_name(const std::string n)
{
	name = n;
}

void Subject::addExam()
{
	if (exmCount >= QUEST_MAX_COUNT)
		throw u8"Слишком много тестов";
	exams[exmCount] = new Exam(name, exmCount + 1);
	exmCount++;
	totalEx++;
}

void Subject::delExam(int n)
{
	if (n >= exmCount)
		throw u8"Нет такого теста";
	if (n < 0)
		throw u8"Отрицательный тест";
	for (int i = n; i < exmCount - 1; i++)
		exams[i] = exams[i + 1];
	exmCount--;
}

void Subject::save()
{
	char current_work_dir[FILENAME_MAX];
	_getcwd(current_work_dir, sizeof(current_work_dir));
	std::string fold = current_work_dir;
	fold += "\\" + name;
	for (int i = 1; i <= totalEx; i++)
	{
		std::string currFilename = fold + "\\exam";
		char* ch = new char[2];
		itoa(i, ch, 10);
		currFilename += ch;
		currFilename += ".bfg";
		remove(currFilename.c_str());
	}
	remove(filename.c_str());
	ofile.open(filename, std::ofstream::out | std::ofstream::binary);
	writeString(&ofile, name);
	ofile.write((char*)&exmCount, sizeof(int));
	for (int i = 0; i < exmCount; i++)
	{
		exams[i]->save();
	}
	ofile.close();
	dataNum = 0;
}

void Subject::read()
{
	readString(&ifile, &name);
	ifile.read((char*)&exmCount, sizeof(int));
	totalEx = exmCount;
	for (int i = 0; i < exmCount; i++)
	{
		exams[i] = new Exam(name, i+1);
	}
	ifile.close();
}

std::ostream & operator<<(std::ostream & os, Subject * sbj)
{
	os << sbj->name << std::endl;
	for (int i = 0; i < sbj->exmCount; i++)
		os << sbj->exams[i];
	return os;
}
