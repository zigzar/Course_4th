#pragma once
#include <ctime>
#include <iostream>
#include <string>
#include <fstream>
#include "Car.h"
using namespace std;

class List
{
	class Node
	{
	public:
		Car data;
		Node* next;

		Node(Car& value, Node* n = nullptr);
		Node(Node* n = nullptr);
	};
	Node* head;
	int size = 0;

public:
	List();
	~List();
	void pushBack();
	void pushBack(Car& value);
	void pushFront();
	int getSize() const;
	Car& operator[] (int);
	void popFront();
	void popBack();
	void clear();
	void insert(int index);
	void removeAt(int index);
	void show() const;
	void save();
	void load();
};