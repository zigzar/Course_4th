#pragma once
#include <ctime>
#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

class List
{
	class Node
	{
	public:
		Car data;
		Node* next;

		Node(Car t = Car(), Node* n = nullptr);
	};
	Node* head;
	int size;

public:
	List();
	~List();
	void pushBack(Car value);
	void pushFront(Car value);
	int getSize() const;
	Car& operator[] (int);
	void popFront();
	void popBack();
	void clear();
	void insert(Car value, int index);
	void removeAt(int index);
};

void show(List&);