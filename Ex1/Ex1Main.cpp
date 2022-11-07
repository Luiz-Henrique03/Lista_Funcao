// Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro. 


#include <iostream>
#include "Ex1.h"

using namespace std;


int main(){
    int numero;
    cout << "Digite um numero para ser calculado seu dobro: " <<endl;
    cin >> numero;

    cout << Dobro(numero);
}