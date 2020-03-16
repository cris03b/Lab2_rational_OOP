#include "rational.h"
#include <iostream>
#include <tgmath.h>


Rational::Rational() {
	//Konstruktor ohne Parameter
	zahler = 0;
	nenner = 0;
}

Rational::Rational(int zahler, int nenner) {
	//Konstruktor mit 2 Parameter
	this->zahler = zahler;
	this->nenner = nenner;
}

Rational::~Rational() {
	//Destruktor
}

// getter
int Rational::getZahler() const {
	return zahler;
}

// setter
void Rational::setZahler(int zahler) {
	this->zahler = zahler;
}

// getter
int Rational::getNenner() const {
	return nenner;
}

// setter
void Rational::setNenner(int nenner) {
	this->nenner = nenner;
}

void Rational::show_rational() {
	//Zeigt die Zahlen in rationaler Form
	Rational r;
	r.setZahler(getZahler());
	r.setNenner(getNenner());
		if (getNenner() == 1) {
			std::cout << getZahler();
		}
		else
			if (getZahler() == 0) {
				std::cout << "0";
			}
			else {
				r = r.Simplify();
				std::cout << r.getZahler() << " / " << r.getNenner();
			}
}

Rational Rational::operator+ (Rational y) {
	//implementiert den + Operator
	Rational suma;
	suma.zahler = zahler * y.nenner + y.zahler * nenner;
	suma.nenner = nenner * y.nenner;
	suma = suma.Simplify();
	return suma;
}

Rational Rational::operator* (Rational y) {
	//implementiert den * Operator
	Rational rezultat;
	rezultat.zahler = zahler * y.zahler;
	rezultat.nenner = nenner * y.nenner;
	rezultat = rezultat.Simplify();
	return rezultat;
}

Rational Rational::operator/ (Rational y) {
	//implementiert den / Operator
	Rational rezultat;
	rezultat.zahler = zahler * y.nenner;
	rezultat.nenner = y.zahler * nenner;
	rezultat = rezultat.Simplify();
	return rezultat;
}

Rational Rational::Simplify() {
	//Kurzt die Bruche durch den GGT des Zahlers mit dem Nenner
	Rational r;
	int z, a, b;
	a = getZahler();
	b = getNenner();
	while (b != 0) {
		z = a % b;
		a = b;
		b = z;
	}
	r.setZahler(getZahler() / a);
	r.setNenner(getNenner() / a); 
	return r;
}