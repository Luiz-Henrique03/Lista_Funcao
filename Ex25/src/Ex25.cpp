#include <iostream>
#include "Ex25.h"

using namespace std;

int Sequencia(int n){
    int resultado = 0;
    for(int i = 0; i < n; i++){
        resultado += i + i*2;
    }

    return resultado;
}

