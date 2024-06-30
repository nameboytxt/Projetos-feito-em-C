#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_cinema = 20;
    int hora_atual = 20;

    int hora_validada = hora_cinema + 30;

    //Posso entrar no cinema?

    if(hora_atual > hora_cinema + 30)
    {
        printf ("Passou do tempo limite! Nao pode entrar!");
    }else if(hora_atual < hora_cinema - 30) {
        printf ("Nem abriu a porta do cinema ainda");
    }
    else{
        printf ("O horario esta certo! Pode entrar");
    }
return 0;
}
