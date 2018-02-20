#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include "Header.h"
using namespace std;
typedef int arr[10][10]; // создали переменную

void main()
{	
	arr myArr;

	//многоуровневая адресация
	int * x = &myArr[0][0]; // создаем указатель на массив
	int * y = x; // указатель на указатель 
	// int **y = &x; то же что и выше - указатель на указатель

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			myArr[i][j] = 1 + rand() % 100;
			cout << myArr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << *y << endl; // ссылается на значение первого элемента
	
	//все три ссылаются на один адрес
	cout << &myArr[0][0] << endl;
	cout << x << endl;
	cout << y << endl;


	//ссылается на адрес где хранится указатель
	cout << &y << endl << endl << endl;





	// УКАЗАТЕЛИ НА ФУНКЦИЮ
	//cout << "Указатели на функцию" << endl;

	////<возвращаемые тип>(*<имя>)(<тип аргументов>);

	////без контролся параметров вызова
	//int (*pf)();

	////без контроля параметров, с контролем по прототипу
	//int(*pf2)(void);
	//
	////с контролем по прототипу
	//int(*pf3)(int, char*);

	//cout << endl << endl;




	//создание указателя
	/*int(*myRef)(int, int) = NULL;
	myRef = sum;
	int result = myRef(5, 10);
	cout << result << endl;*/



	sum2(sum(3, 5), 10);
}




//mas - массив
//
//mas значение
//mas[0] значение
//*mas адрес
//mas + 1 значение
//*mas + 1 адрес 1го плюс 1
//*(mas + 1)
//mas[1][1]
//*mas[1][1] - так нельзя писать


//одно и тоже:
//arr[i] = *(arr +1)
//arr[i][j] = *(arr[i] + j)
//arr[i][j] = *(*(arr + 1) + j)


