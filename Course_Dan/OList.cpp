#pragma once
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


List::Node* List::operator[](int index)
{
	int counter = 0;

	Node* current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current;
		}
		current = current->next;
		counter++;
	}
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

void List::show(float volume) const
{
	cout << "Цена\tКоличество\tМарка\tСтрана\tГод\tОбъем двигателя\tРасход бензина\n";
	Node* current = head;
	while (current != nullptr)
	{
		if (current->data.volume == volume) current->data.show();
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

void List::edit()
{
	int number;
	cout << "Введите номер строки для редактирования: ";
	cin >> number;
	number--;
	int counter = 0;

	Node* current = this->head;

	while (current != nullptr)
	{
		if (counter == number)
		{
			current->data.input();
		}
		current = current->next;
		counter++;
	}
}

void List::filter()
{
	cout << "Введите объем двигателя: ";
	float volume;
	cin >> volume;
	system("CLS");
	this->show(volume);
}
