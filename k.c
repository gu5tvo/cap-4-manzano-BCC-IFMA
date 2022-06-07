#include<stdio.h>

int main () {
    int natural;

    printf("informe um valor que esteja entre 1 e 9: ");
    scanf("%d", &natural);

    if ( natural > 1 && natural < 9)
    {
        printf("O valor está na faixa\n");
    }else{
        printf("O valor está fora da faixa\n");
    }
}