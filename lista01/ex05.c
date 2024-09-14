#include <stdio.h>

/* Faça um programa que apresente os números primos menores que 100. */

int divisores = 0;

int main(void)
{

    for (int i = 2; i < 101; i++)
    {
        divisores = 0;

        for (int div = 2; div < i; div++) // para cada possivel divisor de I (fica entre 2 e i-1, pois todo numero e divisivel por 1 e ele mesmo)
        {
            if (i % div == 0)
            {
                divisores++;
            }
        }

        if (divisores == 0)
        {
            printf("%d ", i);
        }
    }
}