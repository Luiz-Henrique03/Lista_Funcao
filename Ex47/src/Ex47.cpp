/*Faça uma função que receba uma matriz 4 x 4 e retorne quantos valores maiores do que ˜
10 ela possui.
*/



#include <iostream>
#include "Ex47.h"

using namespace std;

int Matriz(int mat[4][4]){
    int qtdDez = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] > 10){
                qtdDez++;
            }
        }
    }

    return qtdDez;
}

