#pragma once
struct Newspaper
{
	char name[20];
	char lastname[20];
	char redactor[64];
	int index = 0;
	int price = 0;

	void input();
	void show();
};