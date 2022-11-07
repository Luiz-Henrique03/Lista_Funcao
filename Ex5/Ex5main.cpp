/*Faça uma função e um programa de teste para o cálculo do volume de uma esfera. ´
Sendo que o raio e passado por par ´ ametro. ˆ
V = 4/3 ∗ π ∗ R3*/


#include <iostream>
#include "Ex5.h"


using namespace std;

int main(){
    int raio;

    cout << "Informa o valor do raio" <<endl;
    cin >> raio;
    cout << CalculaVolume(raio);
}