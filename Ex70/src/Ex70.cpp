#include <iostream>
#include "Ex70.h"

using namespace std;


float reduz(racional *R1, racional *R2){
    return R1->p / R2->q;
}

void neg(int &racional){
     racional * (-1);
}

int Soma(int X, int Y){
    return X + Y;
}

int Multiplicacao(int X, int Y){
    return X * Y;
}

int Divisao(int X, int Y){
    return X / Y;
}

