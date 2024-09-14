#include <stdio.h>

/* Faça um programa que apresente a tabela ASCII (0 a 255), no formato de 16 linhas por 16
colunas, tendo a 1a linha e a 1a coluna rotulada com o valor em hexadecimal de 0 a F. A
primeira célula terá o símbolo com código 0, a segunda com código 1 e assim por diante. */

int main(void)
{
    int casa = 0, linha = 0;

    for (int i = 0; i < 17; i++)
    {
        printf(" %x", i);
    }

    printf("\n");

    for (int i = 0; i < 256; i++)
    {

        if (casa == 0)
        {
            printf("%x", linha);
            linha++;
        }

        if (i < 32)
        {
            printf(" %d", i);
        }
        else
        {
            printf(" %c", i);
        }

        casa++;

        if (casa == 16)
        {
            printf("\n");
            casa = 0;
        }
    }
}