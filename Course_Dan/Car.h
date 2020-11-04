#pragma once
#include <string>
struct Car
{
	std::string brand = "";
	std::string country = "";
	int year = 0;
	float volume = 0;
	float gasMileage = 0;
	float price = 0;
	int amount = 0;

	void input();
	void show();
};

