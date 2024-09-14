#include <stdio.h>

//  Faça um programa que apresente os números de 1 a 10, sendo que cada número deve ser
// impresso em uma linha e os números ímpares deslocados (\t) a direita.

int main(void)
{

    for (int i = 1; i < 11; i++)
    {
        if (i % 2 == 0)
        {
            printf("\t%d\n", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }
}