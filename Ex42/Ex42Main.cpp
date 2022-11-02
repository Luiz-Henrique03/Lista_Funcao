/* Faça uma função que receba um vetor de reais e retorne a média dele*/


#include <iostream>

using namespace std;

float MediaVetor(int * vetor){
    float Media = 0;
    float soma = 0;
    for(int i = 0; i < 5; i++){
        soma += vetor[i];
    }

    Media = soma / 5;

    return Media;
}

int main(){
    int vetor [5] = {10,10,10,10,10};

    cout << MediaVetor(vetor);
}