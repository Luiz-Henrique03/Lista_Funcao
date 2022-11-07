/*Escreva uma função que receba um número inteiro maior do que zero e retorne a soma ´
de todos os seus algarismos. Por exemplo, ao numero 251 corresponder a o valor 8 (2 ´
+ 5 + 1). Se o numero lido não for maior do que zero, o programa terminará com a ´
mensagem “Numero inválido”.*/


#include <iostream>
#include "Ex12.h"

using namespace std;


int main(){
    int numero;
    cout << "Digite um numero: " <<endl;
    cin >> numero;
    cout << SomaAlgarismo(numero);

    return 0;
}