#include "../include/Polinom.h"

int main()
{
	double res, cont;
	double x, y, z;
	string s1, s2;
	Polinom A, B, C;
	cout << "Please input polinom right!" << endl;
	cout << "1)Right monoms with '^'(Right example:x^2   Bad example:x2,x**2)" << endl;
	cout << "2)You can write polinom without const, it will be 1.0(Example: xy^2z^2 -> 1.0 * xy^2z^2)" << endl;
	cout << "3)Write without spaces!" << endl;
	cout << endl;
	cout << "Input your first polinom A:" << endl;
	cin >> s1;
	cout << endl << "Input your second polinom B:" << endl;
	cin >> s2;
	cout << "Input x:" << endl;
	cin >> x;
	cout << endl << "Input y:" << endl;
	cin >> y;
	cout << endl << "Input z:" << endl;
	cin >> z;
	cout << endl << "Input any const you want:" << endl;
	cin >> cont;
	A.string_to_polinom(s1);
	B.string_to_polinom(s2);
	cout << "Polim A:" << endl;
	A.show_polinom();
	cout << endl;
	cout << "Solve: " << A.solve(x, y, z) << endl;
	cout << "Polim B:" << endl;
	B.show_polinom();
	cout << endl;
	cout << "Solve: " << B.solve(x, y, z) << endl;
	cout << "Polinom A+B will be looks like:" << endl;
	C = A + B;
	C.show_polinom();
	cout << endl;
	cout << "Solve: " << C.solve(x, y, z) << endl;
	cout << "Polinom A-B will be looks like:" << endl;
	C = A - B;
	C.show_polinom();
	cout << endl;
	cout << "Solve: " << C.solve(x, y, z) << endl;
	cout << "Polinom A*B will be looks like:" << endl;
	C = A * B;
	C.show_polinom();
	cout << endl;
	cout << "Solve: " << C.solve(x, y, z) << endl;
	cout << "Polinom A*" << cont << " will be looks like:" << endl;
	C = A * cont;
	C.show_polinom();
	cout << endl;
	cout << "Solve: " << C.solve(x, y, z) << endl;
	cout << "Polinom B*" << cont << " will be looks like:" << endl;
	C = B * cont;
	C.show_polinom();
	cout << endl;
	cout << "Solve: " << C.solve(x, y, z) << endl;

}