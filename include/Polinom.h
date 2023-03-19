#include <iostream>
#include <cmath>
#include <string>
#include <exception>

using std::fabs;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::invalid_argument;





struct Monom {

	double k;
	int xyz;

	Monom* next;
};

struct Polinom {

	Monom* head = nullptr;

	void push(double nk, int nxyz);
	Polinom& operator=(Polinom second);
	Polinom operator+(Polinom second);
	Polinom operator-(Polinom second);
	Polinom operator*(double cont);
	Polinom operator*(Polinom second);
	void show_polinom();
	double solve(double x, double y, double z);
	void string_to_polinom(string polim);
};

double string_to_double(string s);