#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	Student(int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT]);
	Student(std::string name, std::string login, std::string password, int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT]);
	~Student();
	int get_type() const;
};

