#ifndef ABQUESTION_H
#define ABQUESTION_H
#pragma once
#include "Question.h"
#pragma once
#include <map>

//вопрос с вариантами ответов
class ABQuestion :
	public Question
{
public:
	ABQuestion();
	~ABQuestion();
	ABQuestion(std::string question, std::string rightAnswer, int rate);
	void set_answers(char a, std::string str);
	void writeToFile(std::ofstream *file) const;
	void readFromFile(std::ifstream *file);
	std::map<char, std::string> get_map() const;
	std::string get_map(char ch);
private:
	std::map <char, std::string> answers;
};
#endif