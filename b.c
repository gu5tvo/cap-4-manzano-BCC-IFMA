#include<stdio.h>
//Efetuar a leitura de um valor numérico inteiro positivo ou negativo representado pela variável N e
//apresentar o valor lido como sendo positivo.
int main () {
    int n;
    scanf("%d", &n);
    if (n>0){
        printf("%d",n);
    }else{
        n = n + (n * -2);
        printf("%d\n", n);
    }
    return 0;
}