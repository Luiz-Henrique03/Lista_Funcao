/*Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5): ˜
!
!!
!!!
!!!!
!!!!!
*/

#include <iostream>
#include "Ex22.h"

using namespace std;



int main(){
    int linhas;

    cout << "Digite a quantidade de linhas: " << endl;
    cin >> linhas;
    ImprimePontoExclamacao(linhas);
}