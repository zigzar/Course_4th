#include "Car.h"
#include "OList.cpp"
#include "Menu.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	Menu menu;
	char answer;
	do {
		system("CLS");
		cout << "1. Load" << endl;
		cout << "2. Save" << endl;
		cout << "3. Add to end" << endl;
		cout << "4. Remove from end" << endl;
		cout << "5. View" << endl;
		cout << "6. Task" << endl;
		cout << "8. Exit" << endl;
		answer = getchar();
		switch (answer)
		{
		//case '1': data.load(); system("PAUSE"); break;
		//case '2': data.save(); system("PAUSE"); break;
		case '3': menu.addToEnd(); system("PAUSE"); break;
		case '4': menu.removeFromEnd(); system("PAUSE"); break;
		case '5': menu.show(); system("PAUSE"); break;
		//case '6': data.task(); system("PAUSE"); break;
		}
	} while (answer != '8');

	system("pause");
}