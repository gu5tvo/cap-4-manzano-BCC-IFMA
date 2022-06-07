#include <stdio.h>

int main ()
{
    int numv[4] = { 0 };
    char var[4] = {'A', 'B', 'C', 'D'};
    int num;

    for (int i = 0; i < 4; i++)
    {
        printf("digite o valor de %c: ", var[i]);
        scanf("%d", &num);
        if (num % 2 == 0 && num % 3 == 0)
        {
            numv[i] = num;
        }
    }

    for (int j = 0; j < 4; j++)
    {
        if (numv[j] != 0 )
        {
            printf("%d\n", numv[j]);
        }
    }
}