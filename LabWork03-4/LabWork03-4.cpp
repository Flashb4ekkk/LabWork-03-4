// LabWork-03-4.cpp
// Левків Роман
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 11

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	y = 0 + (-R - 0) / (0 - (-R)) * (x * (-R));
	// розгалуження в повній формі
	if ((y <= 0 + (-R - 0) / (0 - (-R)) * (x * (-R))) || 
		(y <= sqrt(pow(R, 2) - pow(x, 2)))) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	cin.get();
	return 0;
}