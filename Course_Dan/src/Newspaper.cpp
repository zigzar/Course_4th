#pragma once
#include "../include/Newspaper.h"
#include <iostream>
#include <iomanip>	// форматирование таблицы авто
using namespace std;

void Newspaper::input()
{
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "Название газеты:\t";
	cin.getline(this->name, 32);
	cout << "Индекс издания:\t";
	(cin >> this->index).get();
	cout << "Фамилия:\t";
	cin.getline(this->lastname, 20);
	cout << "ФИО редактора:\t";
	cin.getline(this->redactor, 64);
	cout << "Цена экземпляра газеты:\t";
	(cin >> this->price).get();
	cout << "\n";
}

void Newspaper::show()
{
	cout << setw(26) << left << this->name
		<< setw(17) << this->index
		<< setw(20) << this->lastname
		<< setw(40) << this->redactor 
		<< setw(7) << this->price
		<< "\n";
}
