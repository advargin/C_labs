#include <stdio.h>
#include <math.h>

int main()
{
	int N, K = 0;

	printf("N: ");
	scanf("%d", &N);

	while (pow(4, K + 1) < N)
	{
		K++;
	}

	printf("%d\n", K);

	return 0;
}
