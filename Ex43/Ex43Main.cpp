/*Faça uma função que receba um vetor de inteiros e o preencha com números aleatórios ´
sem repetição. */


#include <iostream>
#include <ctime>
#include "Ex43.h"
#include <iomanip>

using namespace std;


int main(){
    int vetor[5] = {};
    PreencheVetor(vetor);
    for(int  i = 0; i < 5; i++){
        cout << vetor[i] << endl;
    }
}