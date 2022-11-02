/*Faça uma função que receba como parâmetro um vetor X de 30 elementos inteiros e ˆ
retorne, tambem por parãmetro, dois vetores A e B. O vetor A deve conter os elementos ˆ
pares de X e o vetor B, os elementos ´ımpares.*/


#include <iostream>


using namespace std;

void trocaVetor(const int *X, int *A, int *B){
    int contA = 0;
    int contB = 0;
    if(X[0] %2 == 0){
        A[0] = X[0];
    } else if(X[0] %2 != 0){
        B[0] = X[0];
    }
    for(int i = 1; i < 30; i++){
       if(X[i] %2 == 0){
          A[contA] = X[i]; 
          contA++;
       }else if(X[i] %2 != 0){
          B[contB] = X[i];
          contB++;
       }
    }
}

int main(){
    int X [30] = {1,5,7,9,8,1,4,10,45,74,98,561,48,74,14,68,19,13,94,22,14,749,499,31,4941,69,79,978,46,510};
    int A[16] = {};
    int B[14] = {};

    trocaVetor(X,A,B);

    for(int i = 0; i < sizeof(A)/sizeof(int); i++){
         cout << A[i] <<endl;
    }

    cout <<"\n\n";

     for(int i = 0; i < sizeof(B)/sizeof(int); i++){
         cout << B[i] <<endl;
    }
}