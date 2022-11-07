/*Faça uma função que retorne o maior fator primo de um número*/


#include <iostream>
#include "Ex19.h"

using namespace std;
 


int main(){
    int Num;

    cout << "Digite um numero, para ser descoberto seu maior fator primo\n";
    cin >> Num;
    cout << maxPrimo(Num);
}