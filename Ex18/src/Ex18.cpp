#include <iostream>
#include "Ex18.h"

using namespace std;

int Exponenciacao(int x, int z){
    int resultado = x;
    for(int i = 1; i < z; i++){
        resultado *= x;
    }

    return resultado;
}

