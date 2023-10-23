// Lab_05_1.cpp
// < Зозюк Влад >
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз.
// Варіант 8
#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b); // прототип
int main()
{
	double s, t;		
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double d = (g(s*s, t+1) + g(t*t, s+1)) / (1 + pow(g(s + t, s * t), 2));
	cout << "d = " << d << endl;
	return 0;
}
double g(const double a, const double b) // визначення
{
	return (sin(a * b) / (a*a + b*b));
}