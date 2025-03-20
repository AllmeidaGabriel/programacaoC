#include <stdio.h>

int main () {

    int torre = 1, bispo = 1 , rainha = 1;

    //colocando a torre para se movimentar com for
    printf("A torre anda na horizontal : \n");

    for (torre = 1; torre <= 5 ; torre++)
    {
        printf("Direita \n");
    }
    
    //colocando o bispo para se movimentar com while
    printf("O bispo anda na diagonal :\n");

    while (bispo <= 5)
    {
        printf("Cima, Direta\n");

        bispo++;
    }
    
    //rainha se movimentando com do while
    printf("A rainha anda na horizontal \n");

    do
    {
        printf("Esquerda\n");
        rainha++;

    } while (rainha <= 8) ;

    
    return 0;
}