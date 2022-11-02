/* Faça uma função que receba uma matriz de 3 x 3 elementos. Calcule a soma dos ˜
elementos que estao acima da diagonal principal.*/

#include <iostream>
#include "Ex48.h"

using namespace std;

int somaAcimaDiagonalPrincipal(int matriz[3][3]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j > i){
                soma+=matriz[i][j];
            }
        }
    }

    return soma;
}


