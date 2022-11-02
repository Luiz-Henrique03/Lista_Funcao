/*Escreva uma funcao que recebe uma matriz quadrada de ordem N e calcule a sua trans- ˜
posta (se B e a matriz transposta de A então aij = bji).*/

#include <iostream>
#include "Ex52.h"



void Transposta(int a[2][3], int b[3][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
           b[j][i] = a[i][j];
        }
    }
}

