#pragma once
class Rational {
private:
	int zahler;
	int nenner;

public:

	Rational(int zahler, int nenner);
	Rational();
	~Rational();

	int getZahler() const;
	void setZahler(int zahler);
	int getNenner() const;
	void setNenner(int nenner);


	void show_rational();
	Rational operator+ (Rational x);
	Rational operator* (Rational x);
	Rational operator/ (Rational x);
	Rational Simplify();

};
