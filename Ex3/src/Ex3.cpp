#include <iostream>
#include "Ex3.h"

using namespace std;

int verificaPositivoNegativo(int num){
    if(num == 0){
        return 0; 
    }else if(num > 0){
        return 1;
    }else{
        return -1;
    }
}

