/*Faça uma função que receba, por parâmetro, duas matrizes quadradas de orden N, A e ˆ
B, e retorna uma matriz C, tambem por parãmetro, que seja o produto matricial de A e B.*/

#include <iostream>
#include "Ex58.h"

using namespace std;

void ProdutoMatricial(int a[4][4], int b[4][4], int c[4][4]){
    int produto = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            produto = a[i][j] * b[i][j];
            c[i][j] = produto;
        }
    }
}

int main(){
    int a[4][4] = {{2,1,4,1},{4,7,6,4},{3,2,8,1},{7,6,5,2}},
       b[4][4] = {{5,0,3,2},{2,6,4,7},{4,5,3,2},{6,7,4,1}},
       c[4][4] ={{0}};

    ProdutoMatricial(a,b,c);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout <<" "<<c[i][j];
        }
        cout << "\n";
    }
}
