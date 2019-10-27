#include "functions.h"
template <typename T>
void Sort(T Arr[], const int n)
{
	//сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

template <typename T>
void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
				//if (k == i)l = j + 1; else l = 0;//одинаковое с 237
				//condition? expression1(true): expression2(false) можно использовать вместо if
				(k == i) ? l = j + 1/*true*/ : l = 0/*false*/;
				//или l=(k == i) ?  j + 1/*true*/:  0/*false*/;
				for (; l < COLS; l++)
				{
					//если перебираемый элемент меньше, чем выбранный,
					//их нужно поменять местами
					if (Arr[k][l] > Arr[i][j])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
					iterations++;
				}

			}
		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций." << endl;
}