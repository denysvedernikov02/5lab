#include "classes.h"

int main() {

    Student A("Anton", "Pankiv", 8, 8, 7, 10);
	Student B("Maksym", "Martin", 10, 9, 12, 9);
	Student C("Illya", "Shevchenko", 11, 12, 10, 12);

	A.avr();
	B.avr();
	C.avr();

	group ir;
	ir.addStudent(A);
	ir.addStudent(B);
	ir.addStudent(C);
	ir.Rait();
	return 0;
}