#ifndef PERSON_H
#define PERSON_H
#pragma once
#include "Subject.h"
#define TEACH 1
#define ADMIN 2
#define STUD 0
#define SUBJ_MAX_COUNT 30

class Person
{
private:
	std::string name;
	std::string login;
	std::string password;
	Subject *subjects[SUBJ_MAX_COUNT];
	int subjCount;
public:
	Person(int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT], int id = -1);
	Person(std::string name, std::string login, std::string password, int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT], int id = -1);
	~Person();
	int logIn(std::string login, std::string password);
	void set_name(std::string name);
	void set_login(std::string login);
	void set_password(std::string password);
	std::string get_name() const;
	std::string get_login() const;
	std::string get_password() const;
	virtual int get_type() const = 0;
	virtual Subject *get_subj(int i) const;
	int get_subCount() const;
	virtual void writeToFile(std::ofstream *file) const;
	void readFromFile(std::ifstream *file);
};

#endif