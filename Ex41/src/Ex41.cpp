/*Faça uma função que receba um vetor de inteiros e retorne o maior valor*/

#include <iostream>
#include "Ex41.h"

using namespace std;

int RetornaMaiorValor(int *vet){
    int maior = vet[0];
   for(int i =1; i < 10; i++){
      if(vet[i] > maior){
        maior = vet[i];
      }
   }

   return maior;
}

