// RationalLab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "rational.h"
#include "rational.cpp"

Rational Read(Rational x) {
	int a, b;
	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	x.setZahler(a);
	x.setNenner(b);
	return x;
}

void Show(Rational x) {
	if (x.getNenner() == 0) {
		std::cout << "Der Nenner kann nicht NULL sein!";
	}
	else {
		if (x.getNenner() == 1) {
			std::cout << x.getZahler();
		}
		else
		if (x.getZahler() == 0) {
			std::cout << "0";
		}
		else {
			std::cout << x.getZahler() << " / " << x.getNenner();
		}
	}
}

void add(Rational x) {
	Rational y, suma;
	y = Read(y);
	Show(x);
	std::cout << " +" << std::endl;
	Show(y);
	std::cout << std::endl << "____" << std::endl;

	suma = x.Add(y);
	Show(suma);
}

void mult(Rational x) {
	Rational y, rezultat;
	y = Read(y);
	Show(x);
	std::cout << " *" << std::endl;
	Show(y);
	std::cout << std::endl << "____" << std::endl;

	rezultat = x.Mult(y);
	Show(rezultat);
}

void quot(Rational x) {
	Rational y, rezultat;
	y = Read(y);
	Show(x);
	std::cout << " :" << std::endl;
	Show(y);
	std::cout << std::endl << "____" << std::endl;

	rezultat = x.Quot(y);
	Show(rezultat);
}


int main()
{
	Rational x;
	x = Read(x);
	add(x);
	std::cout << std::endl;
	mult(x);
	std::cout << std::endl;
	quot(x);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
