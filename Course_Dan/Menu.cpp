#pragma once
#include "Menu.h"
#include <fstream>

void Menu::load()
{
}

void Menu::save()
{
	list.save();
}

void Menu::addToEnd()
{
	list.pushBack();
}

void Menu::removeFromEnd()
{
	list.popBack();
}

void Menu::show()
{
	cout << "����\t����������\t�����\t������\t���\t����� ���������\t������ �������\n";
	list.show();
}

void Menu::task()
{
}
