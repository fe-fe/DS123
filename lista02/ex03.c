#include <stdio.h>

int main(void)
{

    int num = 0;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%i par", num);
    }
    else
    {
        printf("%i impar", num);
    }
}