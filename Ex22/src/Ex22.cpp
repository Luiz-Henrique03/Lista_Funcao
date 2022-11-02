#include <iostream>
#include "Ex22.h"
using namespace std;

void ImprimePontoExclamacao(int linhas){
    for(int i = 0; i <= linhas; i++){
        for(int j = 0; j < i; j++){
            cout<< "!";
        }
        cout << endl;
    }
}

