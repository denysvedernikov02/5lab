#include "classes.h"

student::student() {
	name = " ";
	marks[0] = 0;
	marks[1] = 0;
	marks[2] = 0;
	marks[3] = 0;
}

student::student(string a, int b, int c, int d, int e) {
	name = a;
	marks[0] = b;
	marks[1] = c;
	marks[2] = d;
	marks[3] = e;
}

void student::avr() {
    float avr1;
	avr1 = (marks[0] + marks[1] + marks[2] + marks[3]) / 4;
	cout << "avr - " << avr1 << endl;
}

void student::getInfo() {
	cout << name << endl;
	cout << marks[0] << endl;
	cout << marks[1] << endl;
	cout << marks[2] << endl;
	cout << marks[3] << endl;
}

void group::addStudent(student &student) {
	this->group_list[k] = &student;
	k = k + 1;
	cout << k << endl;
}

}

student::~student(){}
