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

		Node(Node* n = nullptr);
	};
	Node* head;
	int size;

public:
	List();
	~List();
	void pushBack();
	void pushFront();
	int getSize() const;
	Car& operator[] (int);
	void popFront();
	void popBack();
	void clear();
	void insert(int index);
	void removeAt(int index);
	void show();
};