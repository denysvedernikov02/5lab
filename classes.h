#pragma once
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

class student {
public:
	string name;
	string surname;
	int marks[4];
	float x;
	void getInfo();
	void avr();
	student();
	student(string a, string b, int c, int d, int e, int f);
	~student();
};

class group{
private:
	static const int count = 3;
public:
	int k = 0;
	student* group_list[count];
	void addStudent(student& student);
	void rait();
};
