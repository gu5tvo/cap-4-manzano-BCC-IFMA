#include <stdio.h>

int main()
{
    int numv[5];
    // numv[4] = {'A' =  , 'B', 'C', 'D', 'E'};
    int  maior, menor;
    for (int i = 0; i < 5; i++)
    {
        printf("digite o valor de %c: ", i+65);
        scanf("%d", &numv[i]);

        if (numv[i] > maior)
        {
            maior = numv[i];
            printf(" p1 %d  %d\n", maior, menor);
        }
        if (numv[i] < menor)
        {
            menor = numv[i];
            printf(" p2%d  %d\n", maior, menor);
        }
        
    }

    printf("%d \n %d\n", maior, menor);

}