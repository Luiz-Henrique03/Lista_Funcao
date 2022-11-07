/*Faça uma função para calcular o número neperiano usando uma série. A função deve ˜
ter como parametro o número de termos que serão somados (note que, quanto maior o ˜
numero, mais próxima a resposta estará do valor  e).
l =  P∞ n=0 1 n! = 1 0! + 1 1! + 1 2! + 1 3! + 1 4! + . . .*/

#include <iostream>
#include "Ex31.h"

using namespace std;

int main(){
    int NumTermos;
    cout << "Digite o numero de termos: ";
    cin >> NumTermos;
    cout << Neperiano(NumTermos);
}