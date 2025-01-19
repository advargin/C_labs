#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// выыод произвольной матрицы
void printmatrix(int rows, int cols, int **matrix)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

// создаем матрицу и заполняем рандомными числами (если нужно ввести вручную, другая функция в конце)
int **randommatrix(int rows, int cols)
{
	int **matrix = (int **)malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = (int *)malloc(cols * sizeof(int));
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			matrix[i][j] = rand() % 10;
		}
	}

	return matrix;
}

// замена элементов кратным трем на единицу
void changematrix(int rows, int cols, int **matrix)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (matrix[i][j] % 3 == 0)
			{
				matrix[i][j] = 1;
			}
		}
	}
}

int main()
{
	int n1, m1, n2, m2;
	printf("first matrix dimensions:\n");

	printf("N1: ");
	scanf("%d", &n1);
	printf("M1: ");
	scanf("%d", &m1);

	printf("second matrix dimensions:\n");

	printf("N2: ");
	scanf("%d", &n2);
	printf("M2: ");
	scanf("%d", &m2);

	int **matrix1 = randommatrix(n1, m1);
	printf("first matrix:\n");
	printmatrix(n1, m1, matrix1);

	changematrix(n1, m1, matrix1);
	printf("modified first matrx:\n");
	printmatrix(n1, m1, matrix1);

	int **matrix2 = randommatrix(n2, m2);
	printf("second matrix:\n");
	printmatrix(n2, m2, matrix2);

	changematrix(n2, m2, matrix2);
	printf("modified second matrx:\n");
	printmatrix(n2, m2, matrix2);

	return 0;
}

// если нужно ввести с клавиатуры
void inputmatrix(int rows, int cols)
{

	int **matrix = (int **)malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = (int *)malloc(cols * sizeof(int));
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{

			scanf("%d", &matrix[i][j]);
		}
	}
}
