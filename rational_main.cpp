// RationalLab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "rational.h"
#include "rational.cpp"

Rational test_null_nenner(Rational x) {
	//testet ob der Nenner NULL ist und wenn er NULL ist,
	//dann liest er es immer wieder, bis er nicht mehr NULL ist
	int b;
	while (x.getNenner() == 0) {
		std::cout << "Der Nenner kann nicht NULL sein! Bitte den Nenner noch einmal eingeben:)";
		std::cout << "\nNenner: ";
		std::cin >> b;
		x.setNenner(b);
	}
	return x;
}

Rational Read(Rational x) {
	//Liest den Zahler und den Nenner der rationalen Zahl
	int a, b;
	std::cout << "Zahler: ";
	std::cin >> a;
	std::cout << "Nenner: ";
	std::cin >> b;
	x.setZahler(a);
	x.setNenner(b);
	x = test_null_nenner(x);
	return x;
}

void add(Rational x) {
	//addiert 2 rationale Zahlen (Bruche)
	Rational y, suma;
	y = Read(y);
	x.show_rational();
	std::cout << " +" << std::endl;
	y.show_rational();
	std::cout << std::endl << "____" << std::endl;
	suma = x + y;
	suma.show_rational();
}

void mult(Rational x) {
	//multipliziert 2 rationale Zahlen (Bruche)
	Rational y, rezultat;
	y = Read(y);
	x.show_rational();
	std::cout << " *" << std::endl;
	y.show_rational();
	std::cout << std::endl << "____" << std::endl;
	rezultat = x * y;
	rezultat.show_rational();
}

void quot(Rational x) {
	//Dividiert 2 rationale Zahlen (Bruche)
	Rational y, rezultat;
	y = Read(y);
	int a;
	//testet ob der Zahler!=0 ist, damit man nicht b/0 teilen kann
	while (y.getZahler() == 0) {
		std::cout << "Der Zahler kann hier nicht NULL sein! Bitte den Zahler noch einmal eingeben:)";
		std::cout << "\nZahler: ";
		std::cin >> a;
		y.setZahler(a);
	}
	x.show_rational();
	std::cout << " :" << std::endl;
	y.show_rational();
	std::cout << std::endl << "____" << std::endl;
	rezultat = x / y;
	rezultat.show_rational();
}


int main()
{
	Rational x, y, suma;
	x = Read(x);
	std::cout << std::endl << "FORMA RATIONALA" << std::endl;
	x.show_rational();
	std::cout << std::endl << "ADUNARE" << std::endl;
	add(x);
	std::cout << std::endl << "INMULTIRE" << std::endl;
	mult(x);
	std::cout << std::endl << "IMPARTIRE" << std::endl;
	quot(x);
	std::cout << std::endl << "BYE-BYE! :)" << std::endl;
	return 0;
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
