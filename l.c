#include<stdio.h>

int main () {
    int num;

    printf("informe um valor: ");
    scanf("%d", &num);

    if ( !(num > 3) )
    {
        printf("%d\n",num);
    }
}