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
	Newspaper& getElem(const int index);		// Получить элемент по индексу
	void pushBack(Newspaper& value);			// Вставить элемент в конец	
	void pushFront(Newspaper& value);			// Вставить элемент в начало
	int getSize() const;						// Получить размер списка
	void popFront();							// Удалить с начала
	void popBack();								// Удалить с конца
	void clear();								// Очистить список
	void insert(int index, Newspaper& value);	// Вставить под индексом index
	void removeAt(int index);					// Удалить элемент с индексом index
	void show() const;							// Вывести список в консоль
	void save();								// Сохранить список в файл
	void load();								// Загрузить список из файла
	void edit();								// Редактировать список
	void showHeaders() const;					// Вывести в консоль заголовки таблицы
	void add();									// Добавить новый узел списка
	void remove();								// Интерфейс удаления элемента
	void sortInsert();							// Сортировка списка вставками
	void sortSelect();							// Сортировка списка выбором
	void sortBubble();							// Сортировка списка обменом
	void search();								// Выполнить поиск газеты по индексу
};