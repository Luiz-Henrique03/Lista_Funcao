#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex9/inc/Ex9.h"
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