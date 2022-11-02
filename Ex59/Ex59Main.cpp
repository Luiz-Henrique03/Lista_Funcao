/* Faça uma função que recebe, por parâmetro, 2 vetores de 10 elementos inteiros e que ˆ
calcule e retorne, tambem por parâmetro, o vetor união dos dois primeiros. */

#include <iostream>
#include "Ex59.h"

using namespace std;



int main(){
    int a[10] = {1,4,5,7,8,9,6,3,1,4},
        b[10] = {4,7,8,9,1,0,1,6,2,1},
        c[20] = {0};

    Uniao(a,b,c);

    for(int i = 0; i < 20; i++){
        cout << c[i] <<endl;
    }
}