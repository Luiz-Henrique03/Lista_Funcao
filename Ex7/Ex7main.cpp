/*Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida ˜
em graus Fahrenheit. A formula de conversão˜ é: F = C ∗ (9.0/5.0) + 32.0, sendo F a
temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <iostream>
#include "Ex7.h"

using namespace std;


int main(){
    int Temp;
    cout << "Informe a temperatura em celsius\n";
    cin >> Temp;
    cout << "Temperatura em fahreinheit: " << temperatura(Temp);
}