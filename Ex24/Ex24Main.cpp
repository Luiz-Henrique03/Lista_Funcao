/*Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exem- 
plo, a saída para n = 6 seria:
*
***
*****
*******
*********
************/

#include <iostream>
#include "Ex24.h"

using namespace std;

int main(){
    int linhas;

    cout << "Digite a quantidade de linhas: " << endl;
    cin >> linhas;
    Imprimetriangulo(linhas);
}