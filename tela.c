#include "tela.h"

void criarTela(char quadro[][COLUNA]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (i == 0 || i == (LINHA-1)) {
                quadro[i][j] = '-';
            }
            else if (j == 0 || j == (COLUNA-1)) {
                quadro[i][j] = '|';
            }
            else {
                quadro[i][j] = ' ';
            }
        }
    }
}

void LimparTela(char quadro[][COLUNA]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (i == 0 || i == (LINHA-1)) {
                quadro[i][j] = '-';
            }
            else if (j == 0 || j == (COLUNA-1)) {
                quadro[i][j] = '|';
            }
            else {
                quadro[i][j] = ' ';
            }
        }
    }
}

void PrintarTela(char quadro[][COLUNA]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("%c", quadro[i][j]);
        }
        printf("\n");
    }
}