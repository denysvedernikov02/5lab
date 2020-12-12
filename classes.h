#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:
	string name;
	string surname;
	int marks[4];
	float x;
	void getInfo();
	void avr();
	Student();
	Student(string a, string b, int number0, int number1, int number2, int number3);
	~Student();
};

class Group{
private:
	static const int count = 3;
public:
	int k = 0;
	Student* group_list[count];
	void addStudent(Student& student);
	void Rait();
};
