/*Faça uma função que receba um vetor de inteiros e retorne quantos valores pares ele ˜
possui */



#include <iostream>
#include "Ex40.h"

using namespace std;

int RetornaQtdPar(int *vet){
    int qtdPar = 0;
   for(int i =1; i < 10; i++){
      if(vet[i] %2 == 0){
        qtdPar++;
      }
   }

   return qtdPar;
}

