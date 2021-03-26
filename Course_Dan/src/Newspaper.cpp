#pragma once
#include "../include/Newspaper.h"
#include <iostream>
#include <iomanip>	// форматирование таблицы авто
using namespace std;

void Newspaper::input()
{
	cout << "Название газеты:\t";
	cin >> this->name;
	cout << "Индекс издания:\t";
	cin >> this->index;
	cout << "Фамилия:\t";
	cin >> this->lastname;
	cout << "ФИО редактора:\t";
	cin >> this->redactor;
	cout << "Цена экземпляра газеты:\t";
	cin >> this->price;
	cout << "\n";
}

void Newspaper::show()
{
	cout << setw(20) << left << this->name
		<< setw(6) << this->index
		<< setw(20) << this->lastname
		<< setw(64) << this->redactor 
		<< setw(6) << this->price
		<< "\n";
}
