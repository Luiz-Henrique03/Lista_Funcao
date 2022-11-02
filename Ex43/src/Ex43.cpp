/*Faça uma função que receba um vetor de inteiros e o preencha com números aleatórios ´
sem repetição. */


#include <iostream>
#include <ctime>
#include "Ex43.h"
#include <iomanip>

using namespace std;

void PreencheVetor(int * vetor){
    srand(time(0));
    for(int i = 0; i < 5; i++){
     vetor[i] = rand() % 10 + 1;
    }
}

