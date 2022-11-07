/*Faça um algoritmo que receba um numero inteiro positivo  n e calcule o somatorio de 1 ´
até n.
*/

#include <iostream>
#include "Ex26.h"

using namespace std;



int main(){
    int numero;

    cout << "Digite um numero: " << endl;
    cin >> numero;
    cout << Somatorio(numero);
}