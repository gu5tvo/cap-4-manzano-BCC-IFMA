#include <stdio.h>

int main()
{
    int a, b, c, maior, menor, meio;

    printf("informe o valor A: ");
    scanf("%d", &a);
    maior = a;
    menor = a;
    meio = a;

    printf("informe o valor B: ");
    scanf("%d", &b);
    if (b > maior) {
    
        maior = b;
    }
    if (b < menor) {
    
        menor = b;
    }
    if(b<maior && b>menor) {
        meio = b;
    }
    
    printf("informe o valor C: ");
    scanf("%d", &c);
    if (c > maior) {
    
        maior = c;
    }
    if (c < menor) {
    
        menor = c;
    }if(c<maior && c>menor){


    printf("%d --> %d --> %d\n", menor, meio, maior);

}