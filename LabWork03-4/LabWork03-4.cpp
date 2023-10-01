// LabWork-03-4.cpp
// Левків Роман
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 11

#include <iostream>

using namespace std;

int main(){
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (((y <= sqrt(pow(R, 2) - pow(x, 2)) && (y >= 0 && x >= 0)) || 
		y >= (-R - 0) / (0 - (-R)) * (x - (-R)) && (x <= 0 && y <= 0))) {
		cout << "yes" << endl;
	}
	else if (y < sqrt(9) * pow(3, 2)) {
		cin >> x;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}
