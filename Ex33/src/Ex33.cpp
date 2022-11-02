#include <iostream>
#include "Ex33.h"

using namespace std;

int fatorial(int n){
    int resultado = n;
    for(int i = n - 1; i > 0; i--){
        resultado *= i;
    }

    return resultado;
}

int SomaAlgarismoFatorial(int num){
    num = fatorial(num);
    int resto,
        valor,
        resultado,
        soma = 0;

    resultado = num;
    while(resultado != 0){
        resto = resultado %10;
        resultado = resultado/10;

        soma += resto;
    }

    return soma;
}

