#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [256];
    char sobrenome[256];
    int idade;

    printf("Ola, Qual seu nome?\n");
    scanf("%s",&nome);

    printf("Ola, Qual seu sobrenome?\n");
    scanf("%s",&sobrenome);

    printf("\nQual sua idade?\n");
    scanf("%d",&idade);

    printf ("Nome: %s %s\nIdade: %d",nome,sobrenome,idade);

    printf("\nAguarde em quanto lemos seus dados...\n");

    printf("A primeira letra do seu nome e: %c",nome[0]);

    if(idade >= 18){
        printf("\nVoce e um adulto!");
    }

    else if (idade >= 12){
        printf("\nVoce e um(a) adolecente!");
    }

    else{
        printf("\nVoce e uma criança!");
    }
    return 0;
}
