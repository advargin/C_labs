#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// в задании сказали вычислять сумму внутри одной функции
int sumtwoarrays(int *array1, int N1, int *array2, int N2)
{
    int positive = 0;
    int negative = 0;

    for (int i = 0; i < N1; ++i)
    {
        if (array1[i] > 0)
        {
            positive += array1[i];
        }
    }
    printf("\nfirst arr sum of positive : %d\n", positive);

    for (int i = 0; i < N2; ++i)
    {
        if (array2[i] < 0)
        {
            negative += array2[i];
        }
    }
    printf("\nsecond arr sum of negative: %d\n", negative);

    return positive + negative;
}
// вводим массив вручную
void fillarray(int *array, int N)
{
    printf("input array:  \n");
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &array[i]);
    }
}
void printarray(int *array, int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", array[i]);
}

int main()
{
    int N1, N2;
    printf("\narray 1 length: ");
    scanf("%d", &N1);
    int array1[N1];
    fillarray(array1, N1);
    printarray(array1, N1);
    printf("\narray 2 length: ");
    scanf("%d", &N2);
    int array2[N2];
    fillarray(array2, N2);
    printarray(array2, N2);
    int sum = sumtwoarrays(array1, N1, array2, N2);
    printf("total sum =  %d\n", sum);

    return 0;
}
