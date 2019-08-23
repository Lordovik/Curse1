#include "ToWrQuestion.h"


ToWrQuestion::ToWrQuestion() : Question::Question()
{
}

ToWrQuestion::ToWrQuestion(std::string question, std::string rightAnswer, int rate) : Question::Question(question, rightAnswer, rate)
{
}

ToWrQuestion::~ToWrQuestion()
{
}

void ToWrQuestion::writeToFile(std::ofstream * file) const
{
	const char* abq = typeid(ToWrQuestion).name();
	int size = strlen(abq);
	char *abqT = new char[size];
	strcpy(abqT, abq);
	file->write((char*)&size, sizeof(int));
	file->write(abqT, size);

	Question::writeToFile(file);
}
