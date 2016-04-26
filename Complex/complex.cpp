#include <iostream>
#include <fstream>

using namespace std;

#include "complex.h"

ostream& operator<<(ostream& out, const Complex& c)
{
	out << c.re << " " << "+" << " " << c.im << 'i';
	return out;
}
bool Complex:: operator==(const Complex&c2) const
{
	return (re == c2.re) && (im == c2.im);
}

bool operator!=(const Complex&c1, const Complex&c2)
{
	return !(c1==c2);
}

Complex Complex::operator+(const Complex& c2)const
{
	return Complex(re + c2.re, im + c2.im);
}

Complex Complex::operator-(const Complex& c2)const
{
	return Complex(re - c2.re, im + c2.im);
}

Complex Complex::operator*(const Complex& c2)const
{
	return Complex((re*c2.re) - (im*c2.im), (re*c2.im) + (c2.re*im));
}

Complex Complex::operator/(const Complex& c2)const
{
	return Complex((re*c2.re + im*c2.im) / (c2.re*c2.re + c2.im*c2.im), (c2.re*im) + (re*c2.im) / (c2.re*c2.re + c2.im*c2.im));
}

istream& operator >> (istream& in, Complex& c)
{
	double a, b;
	in >> a >> b;
	c = Complex(a, b);
	return in;
}

