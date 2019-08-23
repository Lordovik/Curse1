#ifndef SUBJECT_H
#define SUBJECT_H
#pragma once
#include "Exam.h"
#include "direct.h"
#include "windows.h"
#define EXAM_MAX_COUNT 30

class Subject
{
	friend std::ostream& operator << (std::ostream& os, Subject *sbj);
private:
	std::string name;
	int exmCount;
	Exam * exams[EXAM_MAX_COUNT];
	std::string filename;
	std::ofstream ofile;
	std::ifstream ifile;
public:
	Subject(std::string name);
	~Subject();
	std::string get_name() const;
	Exam * get_exam(int i) const;
	int get_examCount() const;
	void set_name(const std::string n);
	void addExam();
	void delExam(int n);
	void save();
	void read();
};

#endif