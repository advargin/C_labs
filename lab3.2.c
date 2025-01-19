#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int compare(int *row1, int *row2, int cols)
{
	// сравниваем строку с соседней, если их нужно поменять местами- возвращаем единичку
	for (int i = 0; i < cols; ++i)
	{
		if (row1[i] < row2[i])
		{
			return -1;
		}
		else if (row1[i] > row2[i])
		{
			return 1;
		}
	}
	return 0;
}
void sortmatrix(int rows, int cols, int matrix[rows][cols])
{
	// последовательно прогоняем сравнение по рядам матрицы, сначала по первому элементу, потом по второму итд;
	for (int i = 0; i < rows - 1; ++i)
	{
		for (int j = 0; j < rows - 1 - i; ++j)
		{
			if (compare(matrix[j], matrix[j + 1], cols) > 0)
			{
				// меняем местами строки
				int temp[cols];
				for (int k = 0; k < cols; ++k)
				{
					temp[k] = matrix[j][k];
					matrix[j][k] = matrix[j + 1][k];
					matrix[j + 1][k] = temp[k];
				}
			}
		}
	}
}

int main()
{
	int M, N;
	printf("M:");
	scanf("%d", &M);
	printf("N:");
	scanf("%d", &N);
	//размеры

	int matrix[M][N];

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			matrix[i][j] = rand() % 9 + 1;
		}
	}
	//выводим исходную матрицу
	printf("b4 sorting: \n");
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	sortmatrix(M, N, matrix);
	// отсортировали 
	printf("sorted: \n");
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
