/*Escreva uma funcao que recebe uma matriz quadrada de ordem N e calcule a sua trans- ˜
posta (se B e a matriz transposta de A então aij = bji).*/

#include <iostream>
#include "Ex52.h"

using namespace std;


int main(){
    int a[2][3] = {{1,4,5},{7,9,8}},
       b[3][2] = {{0,0},{0,0},{0,0}};
    
    Transposta(a,b);

    for(int i = 0; i < 3; i++){
        for(int j =0; j < 2; j++){
            cout <<" "<<b[i][j] ;
        }

        cout <<"\n";
    }
       
}