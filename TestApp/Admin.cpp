#include "Admin.h"



Admin::Admin(int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT]) : Person(subjCount, subjects_n)
{
}

Admin::Admin(std::string name, std::string login, std::string password, int subjCount, Subject * subjects_n[SUBJ_MAX_COUNT])
	: Person(name, login, password, subjCount, subjects_n)
{
}



Admin::~Admin()
{
}

int Admin::get_type() const
{
	return ADMIN;
}
