#include <iostream>
#include "Ex15.h"

using namespace std;

bool Ehtriangulo(int Ladotriangulo1, int Ladotriangulo2, int Ladotriangulo3){
    if((Ladotriangulo1 <= Ladotriangulo2 + Ladotriangulo3) || (Ladotriangulo2 <= Ladotriangulo1 + Ladotriangulo3) || Ladotriangulo3 <= Ladotriangulo2 + Ladotriangulo1){
        return true;
    }else{
       return false;
    }
    
}

string Formatriangulo(int Ladotriangulo1, int Ladotriangulo2, int Ladotriangulo3){
    if((Ladotriangulo1 == Ladotriangulo2 && Ladotriangulo1 == Ladotriangulo3)){
        return "Triangulo Equilatero";
    }else if((Ladotriangulo1 == Ladotriangulo2 || Ladotriangulo1 == Ladotriangulo3) || (Ladotriangulo2 == Ladotriangulo3 || Ladotriangulo2 == Ladotriangulo1)){
        return "Triangulo isosceles";
    }else{
        return "Triangulo Escaleno";
    }
}