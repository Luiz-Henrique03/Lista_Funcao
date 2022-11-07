/*Faça uma função que receba como parâmetro o valor de um  angulo em graus e calcule ˆ
o valor do cosseno hiperbolico desse ângulo usando sua respectiva série de Taylor: ´
3
cosh x = P∞ n=0 x 2n (2n)! = 1 +  2 2! + x 4 4! + . . . para todo x
onde x e o valor do ´ angulo em radianos. Considerar ˆ π = 3.141593 e n variando de 0
ate 5. */

#include <iostream>
#include "Ex30.h"
#include <cmath>

using namespace std;



int main(){
    double numero;

    cout << "Informe um numero: " << endl;
    cin >> numero;

    cout << calcCossenoHip(numero);

}