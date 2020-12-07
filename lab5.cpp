#include "classes.h"

int main() {

    student A("Anton", "Pankiv", 8, 8, 7, 10);
	student B("Maksym", "Martin", 10, 9, 12, 9);
	student C("Illya", "Shevchenko", 11, 12, 10, 12);

	A.avr();
	B.avr();
	C.avr();

	group ir;
	ir.addStudent(A);
	ir.addStudent(B);
	ir.addStudent(C);
	ir.rait();
	return 0;
}