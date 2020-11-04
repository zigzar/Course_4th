#pragma once
#include "OList.h"
class Menu
{
public:
	void load();
	void save();
	void addToEnd();
	void removeFromEnd();
	void show();
	void task();

private:
	List list;
};