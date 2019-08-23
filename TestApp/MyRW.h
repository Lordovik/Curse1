#ifndef MYRW_H
#define MYRW_H
#pragma once
#include <string>
#pragma once
#include <fstream>
#pragma once
#include <iostream>

void writeString(std::ofstream *file, std::string str);
void readString(std::ifstream *file, std::string *str);
#endif