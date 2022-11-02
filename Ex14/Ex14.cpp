#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex14/inc/Ex14.h"

using namespace std;

int main(){
    float km,
          litro;
    cout << "Digite o valores de km e litro respectivamente" << endl;
    cin >> km;
    cin >> litro;
    
    
    cout  << Consumo(km,litro);
}