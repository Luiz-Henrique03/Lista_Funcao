/*Faça uma função que recebe, por parâmetro, uma matriz A[7][6] e uma coluna N e retorne ˆ
a soma dos elementos dessa coluna.*/

#include <iostream>
#include "Ex57.h"

using namespace std;

int SomaColuna(int matriz[7][6], int coluna){
   int soma = 0;
    for(int i = 0; i < 7; i++){
        soma += matriz[i][coluna];
    }

}


