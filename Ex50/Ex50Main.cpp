/*Faça uma função que receba uma matriz de 3 x 3 elementos. Calcule e retorne a soma ˜
dos elementos que estao na diagonal principal.*/


#include <iostream>
#include "Ex50.h"

using namespace std;


int main(){
    int mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}};
    cout << somaDiagonalPrincipal(mat);
}