/*Faça uma função que receba um inteiro N como parâmetro, calcule e retorne o resultado ˆ
da seguinte serie: 
S = 2/4 + 5/5 + 10/6 + ... + (N2 + 1)/(N + 3)*/

#include <iostream>
#include "Ex25.h"

using namespace std;


int main(){
    int numero;

    cout << "Digite um numero: " << endl;
    cin >> numero;
    cout << Sequencia(numero);
}