// Lab_03_4.cpp
// < Казимир Богдан >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double b; // вхідний аргумент
	double R; // вхідний аргумент
	double a; // вхідний аргумент
	cout << "a = "; cin >> a;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	cout << "b = "; cin >> b;
	// розгалуження в повній формі
	if ((y <= b && y >= 0 && R * R <= x * x + y * y && (-R <= x && x <= a)) ||
		(y <= 0 && y >= -b && x * x + y * y <= R * R && x <= 0))
		cout << "yes" << endl;
    else
		cout << "no" << endl;
	cin.get();
	return 0;
}
