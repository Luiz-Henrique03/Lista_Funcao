#include <iostream>
#include "Ex19.h"
using namespace std;
 
int maxPrimo(int n){
    int contador = 0,
        maiorPrimo = 0;
    while(contador <= n){
       if(contador%2!=0){
          maiorPrimo = contador;
       }
       contador++;
    }

    return maiorPrimo;
}

