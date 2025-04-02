#include <stdio.h>

int main() {
    int tabuleiro[10][10]; // 10x10 para o tabuleiro

    printf("\n VENHA JOGAR BATALHA NAVAL! \n\n");

    //  tabuleiro com '0'
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // insere um navio na linha 3, coluna C [2][2]
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[7][8] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[9][8] = 3;

    // Exibe as letras das colunas
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c  ", 'A' + i);
    }
    printf("\n");

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Exibe os números das linhas alinhados
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}