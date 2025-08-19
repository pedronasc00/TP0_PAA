#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "figuras.h"

int main() {
    int N, qtde;
    char quadro[LINHA][COLUNA];
    char cont = 's';

    srand(time(NULL));

    criarTela(quadro);

    while (cont == 's' || cont == 'S') {
    
        LimparTela(quadro);
        
        do {
            printf("\nPROGRAMA GERADOR DE OBRA DE ARTE:\n");
            printf("==================================\n");
            printf("Escolha o tipo da figura basica a ser usada para criar a obra:\n");
            printf("**Valores selecionados diferentes dos apresentados irá repetir o menu :)**\n");
            printf("1 - asterisco simples;\n2 - simbolo de soma com asteriscos;\n3 - letra X com asteriscos;\n4 - figuras aleatorias;\n5 - minha arte.\n");

            printf("Digite o tipo de figura desejada: ");
            scanf("%d", &N);

        } while(N < 1 || N > 5);

        printf("Digite a qtde de figuras:");
        scanf("%d", &qtde);

        switch(N) {
            case 1:
                FigAsteriscos(quadro, qtde);
                break;
            case 2:    
                FigSoma(quadro, qtde);
                break;
            case 3:
                FigX(quadro, qtde);
                break;
            case 4:
                FigAleatorias(quadro, qtde);
                break;
            case 5:
                FigCirculo(quadro, qtde);
                break;
        }

        PrintarTela(quadro);
        printf("Refazer o quadro (Sim - s | Nao - n): ");
        scanf(" %c", &cont);
    }
}