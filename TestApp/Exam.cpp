#include "Exam.h"

int examCount = 0;

Exam::Exam(std::string subjname, int id)
{
	questCount = 0;
	examCount++;
	filename = subjname + "\\exam"; 
	char* ch = new char[2];
	itoa(id, ch, 10);
	std::string currFilename = filename;
	currFilename += ch;
	currFilename += ".bfg";
	ifile.open(currFilename);
	if (ifile)
	{
		read();
	}
	else
	{
		name = "";
		questions[0] = new ABQuestion;
	}
	ifile.close();
}


Exam::~Exam()
{
	delete[] questions;
}

void Exam::addABQuest()
{
	if (questCount >= QUEST_MAX_COUNT)
		throw u8"Слишком много вопросов";
	questions[getQuestCount()] = new ABQuestion;
	questCount++;
}

void Exam::addToWrQuest()
{
	if (questCount >= QUEST_MAX_COUNT)
		throw u8"Слишком много вопросов";
	questions[getQuestCount()] = new ToWrQuestion;
	questCount++;
}

//удаление n-го вопроса
void Exam::delQ(int n)
{
	if (n >= questCount)
		throw u8"Нет такого вопроса";
	if (n < 0)
		throw u8"Отрицательный вопрос";
	for (int i = n; i < getQuestCount() - 1; i++) {
		*questions[i] = *questions[i + 1];
	}
	delete questions[--questCount];
}

void Exam::save()
{
	//dataNum++;
	//char* ch = new char[2];
	//itoa(dataNum, ch, 10);
	//std::string currFilename = filename;
	//currFilename += ch;
	//currFilename += ".bfg";

	std::string currFilename;
	int i = 1;
	do
	{
		char* ch = new char[2];
		itoa(i++, ch, 10); 
		currFilename = filename;
		currFilename += ch;
		currFilename += ".bfg";
	} while (std::ifstream(currFilename));

	remove(currFilename.c_str());
	ofile.open(currFilename, std::ofstream::out | std::ofstream::binary);
	writeString(&ofile, name);
	ofile.write((char*)&questCount, sizeof(int));
	for (int i = 0; i < questCount; i++)
	{
		questions[i]->writeToFile(&ofile);
	}
	ofile.close();
}

void Exam::read()
{
	readString(&ifile, &name);
	ifile.read((char*)&questCount, sizeof(int));
	for (int i = 0; i < questCount; i++)
	{
		int s;
		ifile.read((char*)&s, sizeof(int));
		char *ch = new char[s];
		ifile.read(ch, s);
		ch[s] = '\0';

		const char* abq = typeid(ABQuestion).name();
		char *abqT = new char[strlen(abq)];
		strcpy(abqT, abq);

		const char* twq = typeid(ToWrQuestion).name();
		char *twqT = new char[strlen(twq)];
		strcpy(twqT, twq);

		if (strcmp(ch, abqT) == 0)
			questions[i] = new ABQuestion;
		else if (strcmp(ch, twqT) == 0)
			questions[i] = new ToWrQuestion;

		questions[i]->readFromFile(&ifile);
	}
	ifile.close();
}

int Exam::getRateSum()
{
	int rateSum = 0;
	for (int i = 0; i < getQuestCount(); i++)
		rateSum += questions[i]->get_rate();
	return rateSum;
}

int Exam::getQuestCount() const
{
	return questCount;
}

std::string Exam::get_filename() const
{
	return filename;
}

Question * Exam::get_quest(int i) const
{
	return questions[i];
}

std::string Exam::get_name() const
{
	return name;
}
void Exam::set_name(std::string str)
{
	name = str;
}

int Exam::pass(std::string answers[])
{
	int rate = 0;
	for (int i = 0; i < questCount; i++)
	{
		rate += questions[i]->answer(answers[i]);
	}
	return rate;
}

std::ostream& operator << (std::ostream& os, Exam *ex)
{
	os << ex->get_name() << ":\n";
	for (int i = 0; i < ex->questCount; i++) {
		os << i << std::endl << ex->questions[i];
	}
	return os;
}

