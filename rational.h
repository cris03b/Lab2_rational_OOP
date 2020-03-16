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



	Rational Add(Rational x);
	Rational Mult(Rational x);
	Rational Quot(Rational x);
	Rational Simplify();

};
