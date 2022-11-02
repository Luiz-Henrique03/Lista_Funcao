#include <iostream>
#include "Ex24.h"

using namespace std;

void Imprimetriangulo(int linhas){
    for(int i = 0; i <= linhas; i++){
        for(int j = 0; j < (i*2)-1; j++){
            cout<< "*";
        }
        cout << "\n";
    }

}

