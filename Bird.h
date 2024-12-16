#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
class Bird
{
	char name[20];
	char species[50];
	int age;
public:
	Bird();
	Bird(char*, char*, int);
	char* bird_info();
	Bird operator+(Bird);
	bool operator<(Bird);
};

