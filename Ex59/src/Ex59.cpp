/* Faça uma função que recebe, por parâmetro, 2 vetores de 10 elementos inteiros e que ˆ
calcule e retorne, tambem por parâmetro, o vetor união dos dois primeiros. */

#include <iostream>
#include "Ex59.h"

using namespace std;

void Uniao(int a[10], int b[10], int c[20]){
   int tamanho = 20;
   for(int i = 0; i < tamanho; i++){
    if(a[i] == b[i]){
         tamanho--;
      }
      c[i] = a[i];
   }
    for(int j = 0; j < tamanho; j++){
    if(a[j] == b[j]){
         tamanho--;
      }
      c[j] = b[j];
    }
    
}