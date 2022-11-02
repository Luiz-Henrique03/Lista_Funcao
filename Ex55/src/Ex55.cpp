/* Faça uma função que recebe, por parâmetro, uma matriz A[3][3] e retorna a soma dos ˆ
elementos da sua diagonal principal e da sua diagonal secundaria*/

#include <iostream>
#include "Ex55.h"

using namespace std;

int SomaDiagonalPrincipaleSecundaria(int matriz[3][3]){
   int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == i){
                soma+=matriz[i][j];
            }
        }
    }
    for(int i = 3; i >= 0; i--){
        for(int j = 3; j > 0; j--){
            if(j == i){
                soma+=matriz[i][j];
            }
        }
    }

    return soma;
}


