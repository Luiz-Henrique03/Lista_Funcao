/*Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule ˆ
o valor do cosseno desse angulo usando sua respectiva série de Taylor: ´
cos x = P∞ n=0 (−1)n (2n)! x 2n = 1 − x 2 2! + x 4 4! − . . . para todo x,
*/


#include <iostream>
#include "Ex28.h"
#include <cmath>

using namespace std;


int main(){
    double numero;

    cout << "Informe um numero: " << endl;
    cin >> numero;

    cout << calcCosseno(numero);

}