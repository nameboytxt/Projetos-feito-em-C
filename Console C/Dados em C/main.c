#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;

    printf ("Qual seu nome?\n");
    scanf("%s",nome);

    printf ("Qual seu sobrenome?\n");
    scanf("%s",sobrenome);

    printf ("Em qual ano voce nasceu %s %s ?\n",nome,sobrenome);
    scanf ("%d",&ano_nascimento);

    printf("\nShow de bola, %s %s. Qual sua idade?",nome,sobrenome);
    scanf ("%d",&idade);

    printf("Muito bom! O %s %s nasceu em %d e tem %d anos",nome,sobrenome,ano_nascimento,idade);

    return 0;
}
