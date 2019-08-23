#ifndef QUESTION_H
#define QUESTION_H
#pragma once
#include "MyRW.h"
#include <map>

class Question
{
private:
	std::string question;
	std::string rightAnswer;
	int rate;
public:
	Question();
	virtual ~Question() = 0;
	Question(std::string question, std::string rightAnswer, int rate);
	void set_question(std::string question);
	void set_rightAnswer(std::string rightAnswer);
	void set_rate(const int rate);
	std::string get_question() const;
	std::string get_rightAnswer() const;
	int get_rate() const;
	virtual std::map<char, std::string> get_map() const;
	virtual void set_answers(char a, std::string str);
	int answer(std::string answer);
	virtual void writeToFile(std::ofstream *file) const;
	virtual void readFromFile(std::ifstream *file);
	virtual std::string get_map(char ch);
};
#endif