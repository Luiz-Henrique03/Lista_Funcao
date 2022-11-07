/*Faca uma função que receba uma matriz de 3 x 3 elementos. Calcule e retorne a soma ˜
dos elementos que estão abaixo da diagonal principal.*/

#include <iostream>
#include "Ex49.h"

using namespace std;



int main(){
    int mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}};
    cout << somaAbaixoDiagonalPrincipal(mat);
}