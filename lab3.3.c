#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int N, K;

	printf("size: ");
	scanf("%d", &N);
	printf("rand limit : ");
	scanf("%d", &K);

	// динамически выделяем память
	int **matrix = (int **)malloc(N * sizeof(int *));
	for (int i = 0; i < N; ++i)
	{
		matrix[i] = (int *)malloc(N * sizeof(int));
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			matrix[i][j] = rand() % (K + 1);
		}
	}

	printf("matrix:\n");
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	int sum = 0;
	//
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			sum += matrix[i][j];
		}
	}

	printf("sum above diagonal: %d \n", sum);

	return 0;
}
//