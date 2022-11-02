#include <iostream>
#include "Ex26.h"

using namespace std;

int Somatorio(int n){
    int resultado = 0;
    for(int i = 1; i < n; i++){
        resultado += i;
    }

    return resultado;
}

