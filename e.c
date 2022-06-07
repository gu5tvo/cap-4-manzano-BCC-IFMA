#include<stdio.h>
#include<math.h>

int main () {
    int a, b, c, x, del;
    printf("informe o valor a : ");
    scanf("%d",&a);
    printf("informe o valor b : ");
    scanf("%d",&b);
    printf("informe o valor c : ");
    scanf("%d",&c);
    del = (b*b) - 4*a*c;
    if(del<0){
        printf("não há solução real\n");
    }
    if (del == 0)
    {
     x = -b / 2*a;
     printf("%d\n",x);
    }
    if (del > 0)
    {
        x = (-b + sqrt(del))/2*a;
        printf("x1 = %d\n",x);
        x = (-b - sqrt(del))/2*a;
        printf("x2= %d\n",x);
    }
    


}