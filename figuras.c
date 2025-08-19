#include "figuras.h"

void FigAsteriscos(char quadro[][COLUNA], int qtde) {
    for (int n = 0; n < qtde; n++) {
        int i, j;
        
        do {
            i = (rand() % (LINHA - 2)) + 1;  // Numero aleatorio para linha
            j = (rand() % (COLUNA - 2)) + 1; // Numero aleatorio para coluna
        } while(quadro[i][j] != ' ');
        
        
        quadro[i][j] = '*';
    }
}

void FigSoma(char quadro[][COLUNA], int qtde) {
    for (int n = 0; n < qtde; n++) {
        int i, j;
        
        do {
            i = (rand() % (LINHA - 4)) + 2;
            j = (rand() % (COLUNA - 4)) + 2;
        } while (quadro[i][j] != ' ' || quadro[i+1][j+1] != ' ' || quadro[i+1][j-1] != ' ' || quadro[i-1][j+1] != ' ' || quadro[i-1][j-1] != ' ');

        quadro[i][j] = '*';
        quadro[i+1][j] = '*';
        quadro[i-1][j] = '*';
        quadro[i][j+1] = '*';
        quadro[i][j-1] = '*';
    }
}

void FigX(char quadro[][COLUNA], int qtde) {
    for (int n = 0; n < qtde; n++) {
        int i, j;
        
        do {
            i = (rand() % (LINHA - 4)) + 2;
            j = (rand() % (COLUNA - 4)) + 2;
        } while (quadro[i][j] != ' ' || quadro[i+1][j+1] != ' ' || quadro[i+1][j-1] != ' ' || quadro[i-1][j+1] != ' ' || quadro[i-1][j-1] != ' ');

        quadro[i][j] = '*';
        quadro[i+1][j+1] = '*';
        quadro[i+1][j-1] = '*';
        quadro[i-1][j+1] = '*';
        quadro[i-1][j-1] = '*';
    }
}

void FigAleatorias(char quadro[][COLUNA], int qtde) {
    srand(time(NULL));
    int qtdeAleatoria[3];

    qtdeAleatoria[0] = rand() % (qtde + 1);
    int rest = qtde - qtdeAleatoria[0];
    FigAsteriscos(quadro, qtdeAleatoria[0]);
    
    qtdeAleatoria[1] = rand() % (rest + 1);
    FigSoma(quadro, qtdeAleatoria[1]);
    
    qtdeAleatoria[2] = rest - qtdeAleatoria[1];
    FigX(quadro, qtdeAleatoria[2]);
}

void FigCirculo(char quadro[][COLUNA], int qtde) {
    for (int n = 0; n < qtde; n++) {
        int i, j;

        do {
            i = (rand() % (LINHA - 8)) + 4;
            j = (rand() % (COLUNA - 8)) + 4;
        } while (quadro[i][j] != ' ');
        
        quadro[i+1][j] = '*';
        quadro[i-1][j] = '*';
        quadro[i][j+1] = '*';
        quadro[i][j-1] = '*';

        quadro[i+2][j-1] = '*';
        quadro[i+2][j+1] = '*';
        quadro[i-2][j+1] = '*';
        quadro[i-2][j-1] = '*';
        
        quadro[i-1][j+2] = '*';
        quadro[i+1][j+2] = '*';
        quadro[i+1][j-2] = '*';
        quadro[i-1][j-2] = '*';
        
        quadro[i+3][j] = '*';
        quadro[i-3][j] = '*';
        quadro[i][j+3] = '*';
        quadro[i][j-3] = '*';
    }
}

void verificaQtde(int* qtde) {
    if (*qtde < 0) {
        *qtde = (rand() % 100) + 1;
    } else if (*qtde > 100) {
        *qtde = 100;
    }
}