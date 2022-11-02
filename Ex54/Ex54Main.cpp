/*Faça uma função que recebe, por parâmetro, uma matriz A[4][4] e retorna a soma dos ˆ
seus elementos.
*/

#include <iostream>
#include "Ex54.h"

using namespace std;


int main(){
    int mat[4][4] = {{4,5,6,10},{3,9,7,5},{1,2,8,6},{1,2,8,6}};
    cout << SomaMatriz(mat);
}