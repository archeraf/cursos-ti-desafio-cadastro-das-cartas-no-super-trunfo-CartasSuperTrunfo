#include <stdio.h>

int escolhaJogador;

int main(){
    printf("Jogo JoKenPo!\n");
    printf("Escolha 1 - Jo/2 - Ken/ 3 - Po\n");
    scanf("%i", &escolhaJogador);

    switch(escolhaJogador)
    {
        case 1: 
        printf("Escolheu jo\n");
        break;
        case 2:
        printf("Escolheu ken\n"); 
        break;
        case 3:
        printf("Escolheu po\n");
        break;
        default:
        printf("escolheu nada\n");
    }

}