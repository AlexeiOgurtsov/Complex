#include <iostream>
#include "complex.h"
#include<fstream>

using namespace std;

int main()
{
	Complex c1;
	cout << "Enter first complex number(re(space)im, example: 5 7) : ";
	cin >> c1;
	system("cls");
	Complex c2;
	cout << "Enter second complex number(re(space)im, example: 5 7) : ";
	cin >> c2;
	system("cls");
	cout << "First complex number = " << c1 << endl;
	cout << "Second complex number = " << c2 << endl << endl;
	cout << "c1 + c2 = " << c1 + c2 << endl;
	cout << "c1 - c2 = " << c1 - c2 << endl;
	cout << "c1 * c2 = " << c1*c2 << endl;
	cout << "c1 / c2 = " << c1/c2 << endl;
	system("pause");
	return 0;
}