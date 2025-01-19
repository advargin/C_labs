#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool prime(int x)
{

	for (int i = 2; i < x; ++i)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int *primes = NULL;
	// допустим мы не знаем количество двузначных простых чисел
	int count = 0;
	int i = 9;
	

	while (i < 100)
	{
		if (prime(i))
		{
			primes = (int *)realloc(primes, (count + 1) * sizeof(int));
			primes[count++] = i;
		}
		i++;
	}

	printf("2-digit primes :\n");
	for (int i = 0; i < count; ++i)
	{
		printf("%d ", primes[i]);
	}

	return 0;
}
