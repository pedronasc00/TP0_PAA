#ifndef FIGURAS_H
#define FIGURAS_H 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "tela.h"

void FigAsteriscos(char quadro[][COLUNA], int qtde);
void FigSoma(char quadro[][COLUNA], int qtde);
void FigX(char quadro[][COLUNA], int qtde);
void FigAleatorias(char quadro[][COLUNA], int qtde);
void FigCirculo(char quadro[][COLUNA], int qtde);

#endif