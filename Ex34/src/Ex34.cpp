#include <iostream>
#include "Ex34.h"

int FatorialDuplo(int n){
    int fatorial = 1;
    for(int i = 1; i <= n; i++){
       if(i %2!=0){
          fatorial *= i;
       }
    }

    return fatorial;
}