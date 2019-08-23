#pragma once
#include "MyRW.h"

void writeString(std::ofstream *file, std::string str)
{
	int size = str.length();
	file->write((char*)&size, sizeof(int));
	char *ch = new char[size];
	const char *con = str.c_str();
	strcpy(ch, con);
	ch[size] = '\0';
	file->write(ch, size);
}

void readString(std::ifstream *file, std::string *str)
{
	int size;
	file->read((char*)&size, sizeof(int));
	char *ch = new char[size];
	file->read(ch, size);
	ch[size] = '\0';
	*str = ch;
}
