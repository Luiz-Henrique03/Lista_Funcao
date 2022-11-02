/*Crie um programa contendo as seguintes func¸oes que recebem um vetor V números re- ´
ais como parametro: ˆ
• Impressao normal do vetor. ˜
• Impressao inversa. ˜
• Func¸ao que retorna a media aritmetica dos elementos do vetor.*/

#include <iostream>
#include "Ex46.h"

using namespace std;

float vetor(float *vet){
    float Media = 0;
    float soma = 0;

    for(int i = 0; i<6; i++){
        cout << vet[i] <<endl;
    }

    cout <<"\n\n";

   for(int i = 5; i >= 0; i--){
        cout << vet[i] <<endl;
    }
    cout <<"\n\n";
    
    for(int i = 0; i < 5; i++){
        soma += vet[i];
    }

    Media = soma / 5;

    return Media;

}

