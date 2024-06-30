#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player[256];
    char player2[256];

    printf ("Player 1, Sua vez...\n");
    scanf("%s",player);

    printf ("\nPlayer 2, Sua vez...\n");
    scanf("%s",player2);

    printf("\nAguarde estamos calculando o resultado...");
        if(strcmp(player,"papel") == 0){

                    if(strcmp(player2,"papel") == 0){
                            printf("\nEmpate!");
                    }else if(strcmp(player2,"tesoura") == 0){
                        printf("\nPlayer 2 Ganhou e Player 1 Perdeu, porque tesoura corta papel!");
                    }else if(strcmp(player2,"pedra") == 0){
                        printf("\nPlayer 2 Perdeu e Player 1 Ganhou, porque papel embrulha/ganha da pedra!");
                    }else{
                        printf("Voce jogou uma informacao invalida!");

        }
                }else if(strcmp(player,"tesoura") == 0){

                    if(strcmp(player2,"papel") == 0){
                        printf("\nPlayer 2 Perdeu e Player 1 Ganhou, porque tesoura corta papel!");
                    }else if(strcmp(player2,"tesoura") == 0){
                        printf("\nEmpate!");
                    }else if(strcmp(player2,"pedra") == 0){
                        printf("\nPlayer 2 Ganhou e Player 1 Perdeu, porque pedra quebra tesoura/ganha da tesoura!");
                    }else{
                    printf("Voce jogou uma informacao invalida!");

        }
        }else if(strcmp(player,"pedra") == 0){

                    if(strcmp(player2,"papel") == 0){
                        printf("\nPlayer 2 Ganhou e Player 1 Perdeu, porque papel embrulha/ganha da pedra!");
                    }else if(strcmp(player2,"tesoura") == 0){
                        printf("\nPlayer 2 Perdeu e Player 1 Ganhou, porque pedra quebra tesoura/ganha da tesoura!");
                    }else if(strcmp(player2,"pedra") == 0){
                        printf("\nEmpate!");
                    }else{
                    printf("Voce jogou uma informacao invalida!");

        }

    }
    return 0;
}



