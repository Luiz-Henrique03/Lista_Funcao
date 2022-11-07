/*Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule ˆ
o valor do seno desse ângulo usando sua respectiva série de Taylor: ´
sin x = P∞ n=0 (−1)n (2n+1)!x 2n+1 = x − x 3 3! + x 5 5! − . . . para todo x,*/

#include <iostream>
#include "Ex27.h"
#include <cmath>

using namespace std;



int main(){
    double numero;

    cout << "Informe um numero: " << endl;
    cin >> numero;

    cout << calcSeno(numero);

}