/*Faca uma função que receba uma matriz de 3 x 3 elementos. Calcule e retorne a soma ˜
dos elementos que estão abaixo da diagonal principal.*/

#include <iostream>
#include "Ex49.h"

using namespace std;

int somaAbaixoDiagonalPrincipal(int matriz[3][3]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j < i){
                soma+=matriz[i][j];
            }
        }
    }

    return soma;
}


int main(){
    int mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}};
    cout << somaAbaixoDiagonalPrincipal(mat);
}