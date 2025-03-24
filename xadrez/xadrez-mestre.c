#include <stdio.h>

//função para torre
void movimentotorre (int casas) {
    if (casas > 0) {
        printf("Direta\n");
        movimentotorre (casas - 1);
    }
}
//função para bispo
void movimentobispo (int casas) {
    if (casas > 0) {
        printf("Direta, Cima\n");
        movimentobispo (casas - 1);
    }
}
//funçao para rainha
void movimentorainha (int casas) {
    if (casas > 0) {
        printf("Esquerda \n");
        movimentorainha (casas - 1);
    }
}

void movimentocavalo(int casas){
    if (casas > 0) {
        printf("Cima\n");
        movimentocavalo (casas - 1);
    }
}
void movimentocavalolado(int casas){
    if (casas > 0) {
        printf("Direita\n");
        movimentocavalolado (casas - 1);
    }
}
//chamando as funções nos print
int main () {

    printf("\n *** MOVIMENTAÇÕES XADREZ ***\n");
    printf("\nTorre se movimenta na horizontal: \n");
    movimentotorre (5);
    printf("\nBispo se movimenta: \n");
    movimentobispo (5);
    printf("\nRainha se movimenta na horizontal: \n");
    movimentorainha (8);
    printf("\nCavalo se movimenta: \n");
    movimentocavalo (2);
    movimentocavalolado(1);

    
    return 0;
}