#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class student {
private:
	string name;
	int marks[4];
public:
	void getInfo();
	void avr();
	student();
	student(string a, int b, int c, int d, int e);
	~student();
};

class group {
	friend student;
private:
	static const int count = 2;
public:
	int k = 0;
	student* group_list[count];
	void addStudent(student& student);
};