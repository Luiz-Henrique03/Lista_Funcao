#include <iostream>
#include "Ex21.h"
using namespace std;
 


int main(){
    int Num;

    cout << "Digite um numero, para ser descoberto a quantidade de numeros primos abaixo dele: \n";
    cin >> Num;
    cout << qtdPrimo(Num);
}