#include <stdio.h>

int main(void)
{
    char strum[40], strdois[40];
    int iguais = 0;

    scanf("%s", strum);
    getchar();
    scanf("%s", strdois);
    getchar();

    for (int i = 0; i < 40; i++)
    {
        if (strum[i] != strdois[i])
        {
            iguais = 1;
        }

        if (strum[i] == '\0')
        {
            if (strdois[i] != '\0')
            {
                iguais = -1;
            }
            break;
        }

        if (strdois[i] == '\0')
        {
            iguais = 1;
            break;
        }
    }
    printf("%d", iguais);
}