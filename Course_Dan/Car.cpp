#pragma once
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

void Car::input()
{
	cout << "����:\t";
	cin >> this->price;
	cout << "���-��:\t";
	cin >> this->amount;
	cout << "�����:\t";
	cin >> this->brand;
	cout << "������:\t";
	cin >> this->country;
	cout << "���:\t";
	cin >> this->year;
	cout << "����� ���������:\t";
	cin >> this->volume;
	cout << "������ �������:\t";
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
