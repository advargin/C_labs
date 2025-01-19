#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 35
// маловато, но так в задании
#define LowerL_1 -3
#define UpperL_1 1.5
#define LowerL_2 -0.5
#define UpperL_2 3
// пределы

double F1(double x)
{
	return sin(x) * sin(x) * sin(x);
}
double F2(double x)
{
	// точка разрыва
	return ((x == 1) ? (0) : (1 / (1 - x)));
}

double integrate(double (*fun)(double), double lowerlimit, double upperlimit)
{
	double h, sum = 0;

	h = (upperlimit - lowerlimit) / N;
	double x = lowerlimit + h / 2;

	while (x < upperlimit)
	{
		sum += fun(x);
		x += h;
	}
	return sum * h;
}

int main()
{
	printf("%lf\n", integrate(F1, LowerL_1, UpperL_1));
	printf("%lf\n", integrate(F2, LowerL_2, UpperL_2));
	return 0;
}
