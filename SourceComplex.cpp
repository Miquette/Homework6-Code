#include <iostream>
#include <string>
#include <cmath>
#include "HeaderComplex.h"
using namespace std;

int main()
{
	int A, B, C, D;
	string i;
	cout << "Enter the first complex number: " << endl;
	cin >> A >> B;
	cout << "Enter the second complex number: " << endl;
	cin >> C >> D;
	const Complex miq(A, B);
	const Complex ette(C, D);
	int operator add(const Complex miq(), const Complex ette());
	int operator subtract(const Complex miq(), const Complex ette());
	int operator multiply(const Complex miq(), const Complex ette());
	int operator divide(const Complex miq(), const Complex ette());
	cout << miq.toString();
	cout << ette.toString();

	return 0;
}