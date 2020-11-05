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
		cout << "1. Загрузить" << endl;
		cout << "2. Сохранить" << endl;
		cout << "3. Добавить в конец" << endl;
		cout << "4. Удалить с конца" << endl;
		cout << "5. Просмотреть" << endl;
		cout << "6. Редактировать" << endl;
		cout << "7. Фильтр по объему" << endl;
		cout << "8. Минимальный расход топлива" << endl;
		cout << "9. Выход" << endl;
		answer = getchar();
		switch (answer)
		{
		//case '1': data.load(); system("PAUSE"); break;
		case '2': data.save(); system("PAUSE"); break;
		case '3': data.pushBack(); system("PAUSE"); break;
		case '4': data.popBack(); system("PAUSE"); break;
		case '5': data.show(); system("PAUSE"); break;
		case '6': data.edit(); system("PAUSE"); break;
		case '7': data.filter(); system("PAUSE"); break;
		case '8': data.showMin(); system("PAUSE"); break;
		}
	} while (answer != '9');

	system("pause");
}