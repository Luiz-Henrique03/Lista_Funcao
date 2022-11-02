#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex6/inc/Ex6.h"

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