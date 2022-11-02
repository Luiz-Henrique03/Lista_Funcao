#include <iostream>
#include "Ex21.h"

using namespace std;
 
int qtdPrimo(int n){
    int contador = 0,
        qtdPrimo = 0;
    while(contador <= n){
       if(contador%2!=0){
          qtdPrimo++;
       }
       contador++;
    }

    return qtdPrimo;
}

