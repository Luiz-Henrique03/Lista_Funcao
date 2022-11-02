/*Faça uma função que recebe, por parâmetro, uma matriz A[4][4] e retorna a soma dos ˆ
seus elementos.
*/

#include <iostream>
#include "Ex54.h"

using namespace std;

int SomaMatriz(int matriz[4][4]){
    int soma = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            soma += matriz[i][j];
        }
    }

    return soma;
}


