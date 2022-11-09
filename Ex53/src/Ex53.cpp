/*Faça uma função que verifica se uma matriz quadrada de ordem N é a matriz identidade.*/

#include <iostream>
#include "Ex53.h"

using namespace std;

bool VerificaMatrizIdentidade(int matriz[3][3]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if((j == i) && matriz[i][j] != 1){
                return false;
            }else if((j != i) && matriz[i][j] != 0){
                return false;
            }else{
                return true;
            }
        }
    }
}


