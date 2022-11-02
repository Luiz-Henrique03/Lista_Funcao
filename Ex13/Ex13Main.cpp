#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex13/inc/Ex13.h"

using namespace std;


int main(){
    double num1,
           num2;

    char a = ' ';

    cout << "Informe dois numeros: " <<endl;
    cin >> num1;
    cin >> num2;
    
    cout <<"\n Informe como vai ser feito o calculo (+,-,/,*)" <<endl;
    cin >> a;

    cout << Operacoes(num1,num2,a);

}