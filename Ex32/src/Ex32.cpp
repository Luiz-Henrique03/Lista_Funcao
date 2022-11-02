/**/

#include <iostream>
#include "Ex32.h"
#include <cmath>

using namespace std;

void Simplifica(int &a, int &b){
    int MDC = 0;
    for(int i = 1; i < a; i++){
        if(a%i == 0 && b%i == 0){
            MDC = i;
        }
    }

    a = a / MDC;
    b = b / MDC;
   
}

