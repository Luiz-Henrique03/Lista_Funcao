#include <iostream>
#include "Ex38.h"
#include <cmath>

using namespace std;

int FatorialExponencial(int n){
    int fatorial;
    for(int i = 1; i <= n; i++){
        fatorial += pow(n, n -i);
    }

    return fatorial;
}
