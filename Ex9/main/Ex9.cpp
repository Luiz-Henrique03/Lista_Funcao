#include <iostream>
#include <cmath>

using namespace std;

double CalcVolumeCilindro(double altura, double raio){
    const int PI = 3.141592;
    return  PI * pow(raio,2) * altura;
}

