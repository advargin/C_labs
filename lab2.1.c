#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int N, i;

	printf("N: ");
	scanf("%d", &N);
	for (i = 1; i <= N; ++i)
	{

		if (N % i == 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
