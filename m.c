#include <stdio.h>

int main(void) {
        char sexo;
        char nome[15];

        printf("Informe o seu nome: ");
        fgets(nome, 15, stdin);
        /*
        scanf("%s", nome);
        getchar();
        */
        printf("Informe o seu sexo: ");
        sexo = getchar();

        if(sexo == 'M' || sexo == 'm') {
                printf("Ilmo Sr. %s\n", nome);

        } else if (sexo == 'F' || sexo == 'f') {
                printf("Ilmo Sra. %s\n", nome);

        } else {
                puts("Inválido!");
        }

        return 0;
}