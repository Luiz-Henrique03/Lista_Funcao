/*Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exem- ˆ
plo, a saida para n = 4 seria:

*
**
***
****
***
**
**/

#include <iostream>
#include "Ex23.h"

using namespace std;


int main(){
    int linhas;

    cout << "Digite a quantidade de linhas: " << endl;
    cin >> linhas;
    Imprimetriangulo(linhas);
}