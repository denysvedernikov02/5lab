#include "classes.h"


student::student() {
	name = " ";
	surname = " ";
	marks[0] = 0;
	marks[1] = 0;
	marks[2] = 0;
	marks[3] = 0;
}

student::student(string a, string b, int c, int d, int e, int f) {
	name = a;
	surname = b;
	marks[0] = c;
	marks[1] = d;
	marks[2] = e;
	marks[3] = f;
}

void student::avr() {
    float avr1;
	avr1 = (marks[0] + marks[1] + marks[2] + marks[3]) / 4;
	x = avr1;
}

void student::getInfo() {
	cout << name << endl;
	cout << surname << endl;
	cout << marks[0] << endl;
	cout << marks[1] << endl;
	cout << marks[2] << endl;
	cout << marks[3] << endl;
	cout << endl;
}

void group::addStudent(student &student) {
	this->group_list[k] = &student;
	k = k + 1;
}


void group::rait() {
	for (int startIndex = 0; startIndex < count - 1; ++startIndex)
	{
		int largestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < count; ++currentIndex)
		{
			if (group_list[currentIndex]->x > group_list[largestIndex]->x) {
				largestIndex = currentIndex;
			}
		}
		swap(group_list[startIndex]->x, group_list[largestIndex]->x);
	}

	cout << "1) Name: " << group_list[0]->name << endl;
	cout << "Surname: " << group_list[0]->surname << endl;
	cout << "Average mark: " << group_list[0]->x << endl;
	cout << endl;

	cout << "2) Name: " << group_list[1]->name << endl;
	cout << "Surname: " << group_list[1]->surname << endl;
	cout << "Average mark: " << group_list[1]->x << endl;
	cout << endl;

	cout << "3) Name: " << group_list[2]->name << endl;
	cout << "Surname: " << group_list[2]->surname << endl;
	cout << "Average mark: " << group_list[2]->x << endl;
	cout << endl;
}


student::~student(){}
