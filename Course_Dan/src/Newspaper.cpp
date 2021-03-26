#pragma once
#include "../include/Newspaper.h"
#include <iostream>
#include <iomanip>	// �������������� ������� ����
using namespace std;

void Newspaper::input()
{
	cout << "�������� ������:\t";
	cin >> this->name;
	cout << "������ �������:\t";
	cin >> this->index;
	cout << "�������:\t";
	cin >> this->lastname;
	cout << "��� ���������:\t";
	cin >> this->redactor;
	cout << "���� ���������� ������:\t";
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
