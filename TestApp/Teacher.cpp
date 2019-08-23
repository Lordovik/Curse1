#include "Teacher.h"



Teacher::Teacher(int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT], int id) : Person::Person(subjCount, subjects_n, id)
{
	this->id = id;
}

Teacher::Teacher(std::string name, std::string login, std::string password, int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT], int id)
	: Person::Person(name, login, password, subjCount, subjects_n, id)
{
	this->id = id;
}


Teacher::~Teacher()
{
}

int Teacher::get_type() const
{
	return TEACH;
}

void Teacher::writeToFile(std::ofstream * file) const
{
	int i = get_type();
	file->write((char*)&i, sizeof(int));

	file->write((char*)&id, sizeof(int));

	writeString(file, get_name());
	writeString(file, get_login());
	writeString(file, get_password());
}
