#include <iostream>
#include "Ex67.h"

using namespace std;

void LerString(char leitura[5]){
    int i =0;
    cout << "Digite uma letra: " <<endl;
    while (i < 5)
    {
        leitura[i] = getchar();
        i++;
    }
    
}

