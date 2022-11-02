/*Faça uma função que receba uma matriz de 3 x 3 elementos. Calcule e retorne a soma ˜
dos elementos que estao na diagonal secundária.*/


#include <iostream>
#include "Ex51.h"

using namespace std;

int somaDiagonalSecundaria(int matriz[3][3]){
    int soma = 0;
    for(int i = 3; i >= 0; i--){
        for(int j = 3; j > 0; j--){
            if(j == i){
                soma+=matriz[i][j];
            }
        }
    }

    return soma;
}

