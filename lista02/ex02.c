#include <stdio.h>

int main(void)
{

    int a;
    char b;
    float c;
    char d[100];

    scanf("%d", &a);
    getchar();
    b = getchar();
    scanf("%f", &c);
    getchar();
    gets(d);

    printf("%d\n", a);
    printf("%d %c\n", b, b);
    printf("%.2f\n", c);
    printf("%s\n", d);
}