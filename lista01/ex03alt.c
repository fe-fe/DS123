#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que apresente os números de 1 a 15 na forma de um triangulo, como
apresentado a seguir:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */

int main(int argc, char *argv[])
{
    int ultimo = 1;
    int maxlength = 0;

    if (argc >= 2)
    {
        ultimo = atoi(argv[1]); // funcao que transforma a string do argv[1] em inteiro
    }

    maxlength = strlen(argv[1]);

    int max = 1;  // valor maximo que cada linha pode ter, comeca com 1 pois na primeira linha escrevemos apenas 1 valor
    int casa = 0; // segue a quantidade de numeros que ja foram escritos em 1 linha, e nao pode ultrapassar o valor max

    for (int i = 1; i < ultimo + 1; i++)
    {
        printf("%0*d ", maxlength, i);
        casa++;
        if (casa == max)
        {
            printf("\n");
            casa = 0;
            max++;
        }
    }

    while (casa != max)
    {
        printf("000 ");
        casa++;
    }

    printf("\nacabou antes, o programa completou com zeros!");
}