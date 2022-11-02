/*Faça uma função que receba uma matriz de 3 x 3 elementos. Calcule e retorne a soma ˜
dos elementos que estao na diagonal principal.*/


#include <iostream>
#include "Ex50.h"

using namespace std;

int somaDiagonalPrincipal(int matriz[3][3]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == i){
                soma+=matriz[i][j];
            }
        }
    }

    return soma;
}

