#include "Student.h"



Student::Student(int subjCount, Subject *subjects_n[SUBJ_MAX_COUNT]) : Person(subjCount, subjects_n)
{
}

Student::Student(std::string name, std::string login, std::string password, int subjCount, Subject * subjects_n[SUBJ_MAX_COUNT])
	: Person (name, login, password, subjCount, subjects_n)
{

}


Student::~Student()
{
}

int Student::get_type() const
{
	return STUD;
}
