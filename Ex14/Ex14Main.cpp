/*Faça uma função que receba a distância em ˆ Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:*/

#include <iostream>
#include "Ex14.h"

using namespace std;

int main(){
    float km,
          litro;
    cout << "Digite o valores de km e litro respectivamente" << endl;
    cin >> km;
    cin >> litro;
    
    
    cout  << Consumo(km,litro);
}