#include <stdio.h>

void sum_n_avg(int n1, int n2, int n3, int *sum, float *avg)
{
    *sum = n1 + n2 + n3;
    *avg = *sum / 3;
    n1 = 100;
}

int main()
{
    int n1 = 5;
    int n2 = 5;
    int n3 = 10;

    int sum = 0;
    float avg = 0.0;

    sum_n_avg(n1, n2, n3, &sum, &avg);

    printf("Soma: %d\n", sum);
    printf("Média: %.2f\n", avg);
    printf("N1: %d\n", n1);
}