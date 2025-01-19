#include <stdio.h>
#include <math.h>
int main()
{
	float m = 0, n = 0, f = 0;
	f = 0;
	printf("m=");
	scanf("%f", &m);
	printf("n=");
	scanf("%f", &n);

	f = (m > 0 && n < 0) ? (m + n * n) : ((m <= 0 && n < 0) ? (m + 2 * n) : (m + 1));

	printf("f= %f ", f);
	return 0;
}
