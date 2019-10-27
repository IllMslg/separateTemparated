#include "functions.h"//подключение прототипов функций 
#include "print.cpp"//подключение шаблонных функций 
#include "sort.cpp"//подключение шаблонных функций 
#include "MaxMinAvgSum.cpp"//подключение шаблонных функций 
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	FillRand(Arr, n);
	Print(Arr, n);
	Sort(Arr, n);
	Print(Arr, n);
	cout << "Сумма элементов масива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(Arr, n) << endl;
	cout << "Минимальное значение в масиве: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение в масиве: " << maxValueIn(Arr, n) << endl;

	//////////////////////////////////////////////////////////////

	const int m = 10;
	double Brr[m];
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);
	cout << "Сумма : " << Sum(Brr, m) << endl;
	cout << "Среднее : " << Avg(Brr, m) << endl;
	cout << "Минимальное : " << minValueIn(Brr, m) << endl;
	cout << "Максимальное : " << maxValueIn(Brr, m) << endl;

	///////////////////////////////////////////////////////////////

	const int SIZE = 8;
	char Crr[SIZE];
	FillRand(Crr, SIZE);
	Print(Crr, SIZE);
	Sort(Crr, SIZE);
	Print(Crr, SIZE);

	////////////////////////////////////////////////////////////////

	cout << "Двумерные массивы: " << endl;

	int Drr[ROWS][COLS] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << endl;
	/*cout << "сума элементов: " << Sum(Drr, ROWS, COLS) << endl;
	cout << "ср : " << Avg(Drr, ROWS, COLS) << endl;
	cout << "мин: " << minValueIn(Drr, ROWS, COLS) << endl;
	cout << "макс: " << maxValueIn(Drr, ROWS, COLS) << endl;*/
	Sort(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
}




