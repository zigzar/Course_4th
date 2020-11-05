#pragma once
struct Car
{
	char brand[32];
	char country[32];
	int year = 0;
	float volume = 0;
	float gasMileage = 0;
	float price = 0;
	int amount = 0;

	void input();
	void show();
};

