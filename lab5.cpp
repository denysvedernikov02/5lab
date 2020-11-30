#include "classes.h"

int main() {

    student A("vasya", 2, 12, 7, 9);
	student B("anton", 10, 9, 12, 9);
	A.getInfo();
	A.avr();
	B.getInfo();
	B.avr();
	group ir;
	ir.addStudent(A);
	ir.addStudent(B);
	return 0;
}