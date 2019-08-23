#ifndef TEACHER_H
#define TEACHER_H
#pragma once
#include "Person.h"

class Teacher :
	public Person
{
public:
	Teacher(int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT], int id);
	Teacher(std::string name, std::string login, std::string password, int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT], int id);
	~Teacher();
	int get_type() const;
	void writeToFile(std::ofstream *file) const;
private:
	int id;
};

#endif