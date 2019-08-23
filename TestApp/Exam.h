#ifndef EXAM_H
#define EXAM_H
#pragma once
#include "ToWrQuestion.h"
#include "ABQuestion.h"

#define QUEST_MAX_COUNT 30
static int dataNum;

class Exam
{
	friend std::ostream& operator << (std::ostream& os, Exam *ex);
private:
	int questCount;
	std::string name;
	std::string filename;
	std::ofstream ofile;
	std::ifstream ifile;
	Question * questions[QUEST_MAX_COUNT];
public:
	Exam(std::string subjname, int id);
	~Exam();
	int getRateSum();
	int getQuestCount() const;
	std::string get_filename() const;
	Question * get_quest(int i) const;
	std::string get_name() const;
	void set_name(std::string str);
	int pass(std::string answers[]);
	void addABQuest();
	void addToWrQuest();
	void delQ(int n);
	void save();
	void read();
};

#endif