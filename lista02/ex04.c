#include <stdio.h>

int main(void)
{

    int a, b, c, maior;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
}