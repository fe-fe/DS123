#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que apresente os números primos menores que 100. */

int divisores = 0;

int main(int argc, char *argv[])
{
    int max = 100;
    int col = 0;
    int maxlength = 2;

    if (argc >= 2)
    {
        max = atoi(argv[1]); // funcao que transforma a string do argv[1] em inteiro
        maxlength = strlen(argv[1]);
    }

    for (int i = 2; i < max + 1; i++)
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
            printf("%*d ", maxlength, i);
            col++;
            if (col == 15)
            {
                printf("\n");
                col = 0;
            }
        }
    }
}