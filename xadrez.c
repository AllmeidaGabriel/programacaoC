#include <stdio.h>

int main () {

    int escolhaJogador, escolhaComputador, opcao;
    srand(time(0));


    printf("\n *** SEJA BEM VINDO AO JOKENPO ***\n");
    printf("1. Pedra \n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha uma opção!\n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand () % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Voce escolheu Pedra  \n");
        break;
    case 2 :
        printf("Voce escolheu Papel  \n");
        break;
    case 3 :
        printf("Voce escolheu Tesoura  \n");
        break;
    default:
        printf("Opção invalida\n");
        break;
}

switch (escolhaComputador)
{
case 1:
    printf("Computador escolheu Pedra  \n");
    break;
case 2 :
    printf("Computador escolheu Papel  \n");
    break;
case 3 :
    printf("Computador escolheu Tesoura  \n");
    break;
default:
    break;
}

if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
    (escolhaJogador == 2) && (escolhaComputador == 1) ||
    (escolhaJogador == 3) && (escolhaComputador == 2))
{
    printf("Voce Venceu!\n");
} else if (escolhaJogador == escolhaComputador)
{
    printf("EMPATOUUU\n");
} else {
    printf("Voce PERDEU!\n");
}

}