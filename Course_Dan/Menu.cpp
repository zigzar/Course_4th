#pragma once
#include "Menu.h"

void Menu::load()
{
}

void Menu::save()
{
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
	cout << "Цена\tКоличество\tМарка\tСтрана\tГод\tОбъем двигателя\tРасход бензина\n";
	list.show();
}

void Menu::task()
{
}
