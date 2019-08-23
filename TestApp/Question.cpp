#include "Question.h"

Question::Question()
{
	question = "";
	rightAnswer = "";
	rate = 0;
}

Question::~Question()
{
}

Question::Question(std::string question, std::string rightAnswer, int rate)
{
	this->question = question;
	this->rightAnswer = rightAnswer;
	this->rate = rate;
}

void Question::set_question(std::string question)
{
	this->question = question;
}

void Question::set_rightAnswer(std::string rightAnswer)
{
	this->rightAnswer = rightAnswer;
}

void Question::set_rate(const int rate)
{
	this->rate = rate;
}

//нужна только для ABQuestion
void Question::set_answers(char a, std::string str)
{
}

int Question::answer(std::string answer)
{
	if (answer == get_rightAnswer())
		return get_rate();
	else return 0;
}

std::string Question::get_question() const
{
	return this->question;
}

std::string Question::get_rightAnswer() const
{
	return this->rightAnswer;
}

int Question::get_rate() const
{
	return this->rate;
}

//чтобы отличать AB от ToWr
std::map<char, std::string> Question::get_map() const
{
	return std::map<char, std::string>();
}

void Question::writeToFile(std::ofstream *file) const
{
	//здесь наследники пишут typeid
	writeString(file, question);
	writeString(file, rightAnswer);
	file->write((char*)&rate, sizeof(int));
}

//перед считыванием вопроса считать typeid
void Question::readFromFile(std::ifstream * file)
{
	readString(file, &question);
	readString(file, &rightAnswer);
	file->read((char*)&rate, sizeof(int));
}

//нужна только для ABQuestion
std::string Question::get_map(char ch)
{
	return "";
}
