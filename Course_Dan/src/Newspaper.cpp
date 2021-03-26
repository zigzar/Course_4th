#pragma once
#include "../include/Newspaper.h"
#include <iostream>
#include <iomanip>	// �������������� ������� ����
using namespace std;

void Newspaper::input()
{
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "�������� ������:\t";
	cin.getline(this->name, 32);
	cout << "������ �������:\t";
	(cin >> this->index).get();
	cout << "�������:\t";
	cin.getline(this->lastname, 20);
	cout << "��� ���������:\t";
	cin.getline(this->redactor, 64);
	cout << "���� ���������� ������:\t";
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
