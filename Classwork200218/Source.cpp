#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include "Header.h"
using namespace std;
typedef int arr[10][10]; // ������� ����������

void main()
{	
	arr myArr;

	//�������������� ���������
	int * x = &myArr[0][0]; // ������� ��������� �� ������
	int * y = x; // ��������� �� ��������� 
	// int **y = &x; �� �� ��� � ���� - ��������� �� ���������

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
	cout << *y << endl; // ��������� �� �������� ������� ��������
	
	//��� ��� ��������� �� ���� �����
	cout << &myArr[0][0] << endl;
	cout << x << endl;
	cout << y << endl;


	//��������� �� ����� ��� �������� ���������
	cout << &y << endl << endl << endl;





	// ��������� �� �������
	//cout << "��������� �� �������" << endl;

	////<������������ ���>(*<���>)(<��� ����������>);

	////��� ��������� ���������� ������
	//int (*pf)();

	////��� �������� ����������, � ��������� �� ���������
	//int(*pf2)(void);
	//
	////� ��������� �� ���������
	//int(*pf3)(int, char*);

	//cout << endl << endl;




	//�������� ���������
	/*int(*myRef)(int, int) = NULL;
	myRef = sum;
	int result = myRef(5, 10);
	cout << result << endl;*/



	sum2(sum(3, 5), 10);
}




//mas - ������
//
//mas ��������
//mas[0] ��������
//*mas �����
//mas + 1 ��������
//*mas + 1 ����� 1�� ���� 1
//*(mas + 1)
//mas[1][1]
//*mas[1][1] - ��� ������ ������


//���� � ����:
//arr[i] = *(arr +1)
//arr[i][j] = *(arr[i] + j)
//arr[i][j] = *(*(arr + 1) + j)


