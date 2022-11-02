#include <iostream>
#include "Ex31.h"

using namespace std;

int fatorial(int n){
    int resultado = n;
    if(n == 0){
        return 1;
    }
    for(int i = n - 1; i > 0; i--){
        resultado *= i;
    }

    return resultado;
}

double Neperiano(int n){
    double Soma = 0;
    for(int i = 0; i < n; i++){
       Soma += 1 / fatorial(i);
    }

    return Soma;
}

