/*Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a ˆ
soma dos N numeros inteiros existentes entre eles.*/


#include <iostream>
#include "Ex17.h"

using namespace std;


int main(){
    int inicio,
        fim;
    
    cout << "Informe o valor inicial e do valor final, respectivamente: " <<endl;
    cin >> inicio;
    cin >> fim;

    cout << SomaEntre(inicio,fim);
}