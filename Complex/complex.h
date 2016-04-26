#include <iostream>
#include<fstream>
using namespace std;

class Complex
{
private:
	double re, im;
public:
	Complex(double re = 0, double im = 0): 
		re(re), im(im){}

	friend ostream& operator<<(ostream&, const Complex&);
	double getRe()const
	{
		return re;
	}
	double getIm()const
	{
		return im;
	}
	void setRe(double re)
	{
		this->re = re; 
	}
		void setIm(double im)
	{
		this->im = im;
	}
		bool operator==(const Complex&)const;
		Complex operator +(const Complex&)const;
		Complex operator -(const Complex&)const;
		Complex operator*(const Complex& c2)const;
		Complex operator/(const Complex& c2)const;
};
ostream& operator<<(ostream&, const Complex&);
bool operator!=(const Complex&, const Complex&);
istream& operator >> (istream& in, Complex& f);