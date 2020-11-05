﻿#pragma once
#include "OList.h"

List::Node::Node(Car& value, Node* n)
{
	data = value;
	next = n;
}

List::Node::Node(Node* n)
{
	data = Car();
	data.input();
	next = n;
}


List::List()
{
	size = 0;
	head = nullptr;
}


List::~List()
{
	clear();
}


void List::pushBack()
{
	if (head == nullptr)
		head = new Node();
	else
	{
		for (Node* current = head; ; current = current->next)
			if (current->next == nullptr)
			{
				current->next = new Node();
				break;
			}
	}
	size++;
}

void List::pushBack(Car& value)
{
	if (head == nullptr)
		head = new Node(value);
	else
	{
		for (Node* current = head; ; current = current->next)
			if (current->next == nullptr)
			{
				current->next = new Node(value);
				break;
			}
	}
	size++;
}

void List::pushFront()
{
	head = new Node(head);
	size++;
}


int List::getSize() const
{
	return size;
}


Car& List::operator[](int index)
{
	if (index > size - 1 || index < 0)
	{
		string message = "Недопустимый индекс ";
		message.append(to_string(index));
		throw out_of_range(message);
	}
	Node* current = head;
	for (int i = 0; i < index; i++)
		current = current->next;
	return current->data;
}


void List::popFront()
{
	if (size <= 0) return;
	Node* temp = head;
	if (head != nullptr) head = head->next;
	delete temp;
	size--;
}


void List::popBack()
{
	removeAt(size - 1);
}


void List::clear()
{
	while (size) popFront();
}


void List::insert(int index)
{
	if (index > size || index < 0)
	{
		string message = "Недопустимый индекс ";
		message.append(to_string(index));
		throw out_of_range(message);
	}
	if (index == 0) pushFront();
	else
	{
		Node* previous = head;
		for (int i = 0; i < index - 1; i++)
			previous = previous->next;
		previous->next = new Node(previous->next);
		size++;
	}
}


void List::removeAt(int index)
{
	if (index > size - 1 || index < 0)
	{
		string message = "Недопустимый индекс ";
		message.append(to_string(index));
		throw out_of_range(message);
	}
	if (index == 0) popFront();
	else
	{
		Node* previous = head;
		for (int i = 0; i < index - 1; i++)
			previous = previous->next;
		Node* temp = previous->next;
		previous->next = temp->next;
		delete temp;
		size--;
	}
}

void List::show() const
{
	cout << "Цена\tКоличество\tМарка\tСтрана\tГод\tОбъем двигателя\tРасход бензина\n";
	Node* current = head;
	while (current != nullptr)
	{
		current->data.show();
		current = current->next;
	}
}

void List::save()
{
	ofstream fout;
	fout.open("data.txt");
	fout.close();
	try
	{
		fout.open("data.txt", ofstream::app);
		Node* tmp;
		tmp = head;
		while (tmp != nullptr)
		{
			fout.write((char*)&tmp->data, sizeof(Car));
			tmp = tmp->next;
		}
	}
	catch (const std::exception&)
	{
		cerr << "Ошибка записи файла.\n";
		system("pause");
	}
	fout.close();
}

void List::load()
{
	ifstream fin;
	Car current;
	try
	{
		fin.open("data.txt");
		clear();
		while (fin.read((char*)&current, sizeof(Car)))
		{
			pushBack(current);
		}
		fin.close();
	}
	catch (const std::exception&)
	{
		cerr << "Ошибка записи файла.\n";
	}
}
