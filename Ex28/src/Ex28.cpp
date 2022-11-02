#include <iostream>
#include "Ex28.h"
#include <cmath>

using namespace std;

int fatorial(int n){
    int resultado = n;
    for(int i = n - 1; i > 0; i--){
        resultado *= i;
    }

    return resultado;
}

double calcCosseno(double n){
    double soma = -1;
    for(int i = 1; i <= 5; i++){
       if(i%2==0){
          soma += pow(n,i)/fatorial(i);
       }
    }

    return soma;
}

