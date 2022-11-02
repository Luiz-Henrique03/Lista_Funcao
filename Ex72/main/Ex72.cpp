#include <iostream>
#include "Ex72.h"
#include <cmath>


struct Vetor{
    float X;
    float Y;
    float Z;
};

struct Resultado{
    float ResultadoVetores;
};

void Soma(Vetor *v1, Vetor *v2, Resultado *res){
   res->ResultadoVetores = (pow(v1->X,3) + pow(v2->X, 3)) + (pow(v1->Y, 3) + pow(v2->Y, 3)) + (pow(v1->Z,3) + pow(v2->Z,3)); 
   
}

