#include "classes.h"


Student::Student() {
	name = " ";
	surname = " ";
	for (int i = 0; i < 4; i++) {
		marks[i] = 0;
	}
}

Student::Student(string a, string b, int number0, int number1, int number2, int number3) {
	name = a;
	surname = b;
	marks[0] = number0;
	marks[1] = number1;
	marks[2] = number2;
	marks[3] = number3;
}

void Student::avr() {
    float avr1;
	avr1 = (marks[0] + marks[1] + marks[2] + marks[3]) / 4;
	x = avr1;
}

void Student::getInfo() {
	cout << name << endl;
	cout << surname << endl;
	for (int i = 0; i< 4; i++) {
		cout << marks[i] << endl;
	}
	cout << endl;
}

void group::addStudent(Student &student) {
	this->group_list[k] = &student;
	k = k + 1;
}


void group::Rait() {
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


Student::~Student(){}
