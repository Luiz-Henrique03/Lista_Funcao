/*Faça uma função que verifica se uma matriz quadrada de ordem N é a matriz identidade.*/

#include <iostream>
#include "Ex53.h"

using namespace std;


int main(){
    int mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}};
    cout << VerificaMatrizIdentidade(mat);
}