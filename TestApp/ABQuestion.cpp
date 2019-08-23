#include "ABQuestion.h"

ABQuestion::ABQuestion() : Question::Question()
{
	answers = { { 'a', "" },
				{ 'b', "" },
				{ 'c', "" },
				{ 'd', "" } };
}

ABQuestion::ABQuestion(std::string question, std::string rightAnswer, int rate)
	: Question::Question(question, rightAnswer, rate)
{
	answers = { { 'a', "" },
				{ 'b', "" },
				{ 'c', "" },
				{ 'd', "" } };
}

ABQuestion::~ABQuestion()
{
}

void ABQuestion::set_answers(char a, std::string str)
{
	answers[a] = str;
}

void ABQuestion::writeToFile(std::ofstream * file) const
{
	const char* abq = typeid(ABQuestion).name();
	int size = strlen(abq);
	char *abqT = new char[size];
	strcpy(abqT, abq);
	file->write((char*)&size, sizeof(int));
	file->write(abqT, size);

	Question::writeToFile(file);
	for each(std::pair<char, std::string> answ in answers)
	{
		writeString(file, answ.second);
	}
}

void ABQuestion::readFromFile(std::ifstream * file)
{
	Question::readFromFile(file);
	for each(std::pair<char, std::string> answ in answers)
	{
		std::string str;
		readString(file, &str);
		answers[answ.first] = str;
	}
}

std::map<char, std::string> ABQuestion::get_map() const
{
	return answers;
}

std::string ABQuestion::get_map(char ch)
{
	return answers[ch];
}
