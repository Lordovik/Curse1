#pragma once
#include "Person.h"
class Admin :
	public Person
{
public:
	Admin(int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT]);
	Admin(std::string name, std::string login, std::string password, int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT]);
	~Admin();
	int get_type() const;
};

