/*Faça uma função que recebe, por parâmetro, uma matriz A[7][6] e uma linha N e retorne ˆ
a soma dos elementos dessa linha.*/

#include <iostream>
#include "Ex56.h"

using namespace std;

int SomaLinha(int matriz[7][6], int linha){
   int soma = 0;
    for(int i = 0; i < 6; i++){
        soma += matriz[linha][i];
    }

}
