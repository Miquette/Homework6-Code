#ifndef COMPLEX_
#define COMPLEX_
#include <string>
#include <cmath>

class Complex
{
private:
	int a;
	int b;
	int num;
	string i;
public:
	Complex()
	{
		a = 0;
		b = 0;
	}
	Complex(int A, int B)
	{
		a = A;
		b = B;
		num = a + b;

	}
	Complex(int A)
	{
		b = 0;
		a = A;
		num = a;

	}

	int getRealPart()
	{
		return a;
	}
	int getImaginaryPart()
	{
		return b;
	}

	string toString(int a, int b)
	{
		char *intStra = itoa(a);
		string stra = string(intStra);
		char *intStrb = itoa(b);
		string strb = string(intStrb);
		cout << stra << strb << endl;
	}
};
	int operator add(const Complex miq, const Complex ette)
	{
		cout << "(" << miq.getRealPart << "+" << miq.getImaginaryPart << "i) + (";
		cout << ette.getRealPart << "+" << ette.getImaginaryPart << "i) = ";
		cout << ((miq.getRealPart + ette.getRealPart) + (miq.getImaginaryPart + ette.getImaginaryPart)) << "i" << endl;
	}
	int operator subtract(const Complex miq, const Complex ette)
	{
		cout << "(" << miq.getRealPart << "+" << miq.getImaginaryPart << "i) - (";
		cout << ette.getRealPart << "+" << ette.getImaginaryPart << "i) = ";
		cout << ((miq.getRealPart - ette.getRealPart) + (miq.getImaginaryPart + ette.getImaginaryPart)) << "i" << endl;
	}
	int operator multiply(const Complex miq, const Complex ette)
	{
		cout << "(" << miq.getRealPart << "+" << miq.getImaginaryPart << "i) * (";
		cout << ette.getRealPart << "+" << ette.getImaginaryPart << "i) = ";
		cout << ((miq.getRealPart * ette.getRealPart) - (miq.getImaginaryPart * ette.getImaginaryPart)) + ((miq.getImaginaryPart * ette.getRealPart) + (miq.getRealPart * ette.getImaginaryPart)) << "i" << endl;
	}
	int operator divide(const Complex miq, const Complex ette)
	{
		cout << "(" << miq.getRealPart << "+" << miq.getImaginaryPart << "i) / (";
		cout << ette.getRealPart << "+" << ette.getImaginaryPart << "i) = (";
		cout << (((miq.getRealPart * ette.getRealPart) + (miq.getImaginaryPart * ette.getImaginaryPart)) / ((ette.getRealPart) ^ 2 + (ette.getImaginaryPart) ^ 2)) << ") + (";
		cout << (((miq.getImaginaryPart * ette.getRealPart) + (miq.getRealPart * ette.getImaginaryPart))) << "i / " << ((ette.getRealPart) ^ 2 + (ette.getImaginaryPart) ^ 2) << ")" << endl;
	}



#endif // !COMPLEX_

