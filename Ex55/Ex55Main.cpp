/* Faça uma função que recebe, por parâmetro, uma matriz A[3][3] e retorna a soma dos ˆ
elementos da sua diagonal principal e da sua diagonal secundaria*/

#include <iostream>
#include "Ex55.h"

using namespace std;

int main(){
    int mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}};
    cout << SomaDiagonalPrincipaleSecundaria(mat);
}