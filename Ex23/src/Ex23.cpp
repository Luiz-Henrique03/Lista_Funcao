#include <iostream>
#include "Ex23.h"

using namespace std;

void Imprimetriangulo(int linhas){
    for(int i = 0; i <= linhas; i++){
        for(int j = 0; j < i; j++){
            cout<< "*";
        }
        cout << endl;
    }
     for(int i = linhas; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout<< "*";
        }
        cout << endl;
    }
}

