#include "rational.h"
#include <iostream>
#include <tgmath.h>


Rational::Rational() {
	zahler = 0;
	nenner = 0;
}

Rational::Rational(int zahler, int nenner) {
	this->zahler = zahler;
	this->nenner = nenner;
}

Rational::~Rational() {

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

Rational Rational::Add(Rational y) {
	Rational suma;
	suma.zahler = zahler * y.nenner + y.zahler * nenner;
	suma.nenner = nenner * y.nenner;
	suma = suma.Simplify();
	//std::cout << suma.getZahler() << " " << suma.getNenner();
	return suma;
}

Rational Rational::Mult(Rational y) {
	Rational rezultat;
	rezultat.zahler = zahler * y.zahler;
	rezultat.nenner = nenner * y.nenner;
	rezultat = rezultat.Simplify();
	return rezultat;
}

Rational Rational::Quot(Rational y) {
	Rational rezultat;
	rezultat.zahler = zahler * y.nenner;
	rezultat.nenner = y.zahler * nenner;
	rezultat = rezultat.Simplify();
	return rezultat;
}

Rational Rational::Simplify() {
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