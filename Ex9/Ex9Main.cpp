/*Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume ˜
do cilindro. O volume de um cilindro circular e calculado por meio da seguinte f ´ ormula: ´
V = π ∗ raio2 ∗ altura, onde π = 3.141592*/

#include <iostream>
#include "Ex9.h"
#include <cmath>

using namespace std;


int main(){
    double altura,
        raio;
    cout << "Informe a altura e o raio" << endl;
    cin >> altura;
    cin >> raio;

    cout << "Calculo do volume do cilindro(3.141592 * raio² * altura) = " << CalcVolumeCilindro(altura,raio);
}