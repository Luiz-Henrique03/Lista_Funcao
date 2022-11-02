#include <iostream>
#include "Ex29.h"
#include <cmath>

using namespace std;

int fatorial(int n){
    int resultado = n;
    for(int i = n - 1; i > 0; i--){
        resultado *= i;
    }

    return resultado;
}

double calcSenoHiper(double n){
    double soma = n;
    for(int i = 0; i <= 5; i++){
       if(i%2!=0){
          soma += pow(n,i)/fatorial(i);
       }
    }

    return soma;
}

