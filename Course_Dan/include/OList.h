#pragma once
#include <ctime>
#include <iostream>
#include <string>
#include <fstream>
#include "Newspaper.h"
using namespace std;

class List
{
	class Node
	{
	public:
		Newspaper data;
		Node* next;

		Node(Newspaper& value, Node* n = nullptr);
		Node(Node* n = nullptr);
	};
	Node* head;
	int size = 0;

public:
	List();
	~List();
	void pushBack();
	void pushBack(Newspaper& value);
	void pushFront(Newspaper& value);
	int getSize() const;
	void popFront();
	void popBack();
	void clear();
	void insert(int index, Newspaper& value);
	void removeAt(int index);
	void show() const;
	//void show(float volume) const;
	void save();
	void load();
	void edit();
	//void filter();
	//void showMin();
	void showHeaders() const;
	void add();
	void remove();
};