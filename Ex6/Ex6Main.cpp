/*Faça uma função que receba 3 números inteiros como parâmetro, representando horas, ˆ
minutos e segundos, e os converta em segundos.
*/


#include <iostream>
#include "Ex6.h"

using namespace std;

int main(){
   int hora,
       minuto,
       segundo;

    cout << "Informe hora, minuto e segundo, respectivamente: " << endl;
    cin >> hora;
    cin >> minuto;
    cin >> segundo;

    cout << converteParaSegundo(hora,minuto,segundo);
}