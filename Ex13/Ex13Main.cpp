/*Faça uma função que receba dois valores numéricos e um símbolo. Este s´ımbolo representara a operação que se deseja efetuar com os números. Se o símbolo for + devera´
ser realizada uma adição, se for  − uma subtração, se for / uma divisão e se for  ∗ sera´
efetuada uma multiplicação.*/


#include <iostream>
#include "Ex13.h"

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