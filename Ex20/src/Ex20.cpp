#include <iostream>
#include "Ex20.h"

using namespace std;

int fatorial(int n){
    int resultado = n;
    for(int i = n - 1; i > 0; i--){
        resultado *= i;
    }

    return resultado;
}

