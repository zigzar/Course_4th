#include "Car.h"
#include "OList.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	List data;
	char answer;
	do {
		system("CLS");
		cout << "1. Load" << endl;
		cout << "2. Save" << endl;
		cout << "3. Add to end" << endl;
		cout << "4. Remove from end" << endl;
		cout << "5. View" << endl;
		cout << "6. Edit" << endl;
		cout << "8. Exit" << endl;
		answer = getchar();
		switch (answer)
		{
		//case '1': data.load(); system("PAUSE"); break;
		case '2': data.save(); system("PAUSE"); break;
		case '3': data.pushBack(); system("PAUSE"); break;
		case '4': data.popBack(); system("PAUSE"); break;
		case '5': data.show(); system("PAUSE"); break;
		case '6': data.edit(); system("PAUSE"); break;
		}
	} while (answer != '8');

	system("pause");
}