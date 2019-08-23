#ifndef TOWRQUEST_H
#define TOWRQUEST_H
#pragma once
#include "Question.h"

//вопрос с письменным ответом
class ToWrQuestion :
	public Question
{
public:
	ToWrQuestion(std::string question, std::string rightAnswer, int rate);
	ToWrQuestion();
	~ToWrQuestion();
	void writeToFile(std::ofstream *file) const;
};

#endif