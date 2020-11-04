#include "OList.h"


List::Node::Node(Car t, Node* n)
{
	data = t;
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


void List::pushBack(Car value)
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


void List::pushFront(Car value)
{
	head = new Node(value, head);
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
	head = head->next;
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


void List::insert(Car value, int index)
{
	if (index > size || index < 0)
	{
		string message = "Недопустимый индекс ";
		message.append(to_string(index));
		throw out_of_range(message);
	}
	if (index == 0) pushFront(value);
	else
	{
		Node* previous = head;
		for (int i = 0; i < index - 1; i++)
			previous = previous->next;
		previous->next = new Node(value, previous->next);
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


void show(List& list)
{
	cout << "size = " << list.getSize() << endl;
	for (int i = 0; i < list.getSize(); i++) cout << list[i].brand << "\t" << list[i].year << "\t" << list[i].country << "\t" << "  ";
	cout << endl;
}
