#include <stdio.h>

/* Faça um programa que apresente os números de 1 a 15 na forma de um triangulo, como
apresentado a seguir:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */

int main(void)
{

    int max = 1;  // valor maximo que cada linha pode ter, comeca com 1 pois na primeira linha escrevemos apenas 1 valor
    int casa = 0; // segue a quantidade de numeros que ja foram escritos em 1 linha, e nao pode ultrapassar o valor max

    for (int i = 1; i < 16; i++)
    {
        printf("%d ", i);
        casa++;
        if (casa == max)
        {
            printf("\n");
            casa = 0;
            max++;
        }
    }
}