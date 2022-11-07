
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


