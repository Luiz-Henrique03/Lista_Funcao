#include <iostream>
#include "Ex17.h"

using namespace std;

int SomaEntre(int inicio, int fim){
    int soma = 0;
    for(int i = inicio; i < fim; i++){
        soma += i;
    }

    return soma;
}

