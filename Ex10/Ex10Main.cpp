/*Faça uma função que receba dois números e retorne qual deles é o maior.*/


#include <iostream>
#include "Ex10.h"

using namespace std;

int main(){
    int a,
        b;
    
    cout << "Digite dois valores: ";
    cin >> a;
    cin >> b;
    cout <<  ComparaDoisNumeros(a,b);
}