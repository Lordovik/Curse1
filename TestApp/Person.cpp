#include "Person.h"



Person::Person(int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT], int id)
{
	name = "";
	login = "";
	password = "";
	subjCount = subjCount;
	if (id == -1)
		for (int i = 0; i < subjCount; i++)
			subjects[i] = subjects_n[i];
	else
		subjects[0] = subjects_n[id];
}

Person::Person(std::string name, std::string login, std::string password, int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT], int id)
{
	this->name = name;
	this->login = login;
	this->password = password;
	this->subjCount = subjCount;
	if (id == -1)
		for (int i = 0; i < subjCount; i++)
			subjects[i] = subjects_n[i];
	else
		subjects[0] = subjects_n[id];
}


Person::~Person()
{
}

int Person::logIn(std::string login, std::string password)
{
	if (this->get_login() == login && this->get_password() == password)
		return get_type();
	else return -1;
}

void Person::set_name(std::string name)
{
	this->name = name;
}

void Person::set_login(std::string login)
{
	this->login = login;
}

void Person::set_password(std::string password)
{
	this->password = password;
}

std::string Person::get_name() const
{
	return name;
}

std::string Person::get_login() const
{
	return login;
}

std::string Person::get_password() const
{
	return password;
}
Subject * Person::get_subj(int i) const
{
	return subjects[i];
}
int Person::get_subCount() const
{
	return subjCount;
}
void Person::writeToFile(std::ofstream * file) const
{
	int i = get_type();
	file->write((char*)&i, sizeof(int));
	writeString(file, name);
	writeString(file, login);
	writeString(file, password);
}

void Person::readFromFile(std::ifstream * file)
{
	readString(file, &name);
	readString(file, &login);
	readString(file, &password);
}