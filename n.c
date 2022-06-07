#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);

    scanf("%d", &b);

    scanf("%d", &c);

    a = a + b + c;

    if (a >= 100)
    {
        printf("%d\n", a);
    }
    
}