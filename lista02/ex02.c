#include <stdio.h>

int main(void)
{

    int a;
    char b;
    float c;
    char d[100];

    scanf("%d\n", &a);
    b = getchar();
    scanf("%f\n", &c);
    gets(d);

    printf("%d\n", a);
    printf("%d %c\n", b, b);
    printf("%.2f\n", c);
    printf("%s\n", d);
}
