#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

void Car::input()
{
	cout << "Цена:\t";
	cin >> this->price;
	cout << "Кол-во:\t";
	cin >> this->amount;
	cout << "Марка:\t";
	cin >> this->brand;
	cout << "Страна:\t";
	cin >> this->country;
	cout << "Год:\t";
	cin >> this->year;
	cout << "\n";
}

void Car::show()
{
		cout << "Цена:\t";
	cout << this->price;
	cout << "Кол-во:\t";
	cout << this->amount;
	cout << "Марка:\t";
	cout << this->brand;
	cout << "Страна:\t";
	cout << this->country;
	cout << "Год:\t";
	cout << this->year;
	cout << "\n";
}
