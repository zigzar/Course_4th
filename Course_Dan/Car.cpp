#pragma once
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
	cout << "Объем двигателя:\t";
	cin >> this->volume;
	cout << "Расход бензина:\t";
	cin >> this->gasMileage;
	cout << "\n";
}

void Car::show()
{
	cout << this->price;
	cout << "\t";
	cout << this->amount;
	cout << "\t";
	cout << this->brand;
	cout << "\t";
	cout << this->country;
	cout << "\t";
	cout << this->year;
	cout << "\t";
	cout << this->volume;
	cout << "\t";
	cout << this->gasMileage;
	cout << "\n";
}
