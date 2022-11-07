/*Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação: ˜
hipotenusa =
√
a
2 + b
2. Faça uma função que receba os valores de  a e b e calcule o
valor da hipotenusa atraves da equação. */


#include <iostream>
#include "Ex8.h"
#include <cmath>

using namespace std;


int main(){
    int a,
        b;

    cout << "Digite o valores para os catetos a e b" << endl;
    cin >> a;
    cin >> b;

    cout << Hipotenusa(a,b);
}