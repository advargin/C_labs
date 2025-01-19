#include <stdio.h>
#include <math.h>

int main()
{
	int y1 = 0, y2 = 0, m1 = 0, m2 = 0, d1 = 0, d2 = 0;
	printf("first person birthdate, day: ");
	scanf("%d", &d1);
	printf("first person birthdate, month: ");
	scanf("%d", &m1);
	printf("first person birthdate, year: ");
	scanf("%d", &y1);
	printf("second person birthdate, day: ");
	scanf("%d", &d2);
	printf("second person birthdate, month: ");
	scanf("%d", &m2);
	printf("second person birthdate, year: ");
	scanf("%d", &y2);
	printf("\n%d %d %d %d %d %d", d1, m1, y1, d2, m2, y2);

	if (y1 < y2)
	{
		printf("first person is older\n");
	}
	else if (y1 > y2)
	{
		printf("second person is older\n");
	}
	else
	{
		if (m1 < m2)
		{
			printf("first person is older\n");
		}
		else if (m1 > m2)
		{
			printf("second person is older\n");
		}
		else
		{
			if (d1 < d2)
			{
				printf("first person is older\n");
			}
			else if (d1 > d2)
			{
				printf("second person is older\n");
			}
			else
			{
				printf("birthdates are equal\n");
			}
		}
	}

	return 0;
}