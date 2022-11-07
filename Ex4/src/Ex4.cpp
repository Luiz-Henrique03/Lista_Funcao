#include <iostream>
#include "Ex4.h"

using namespace std;

string eQuadradoPefeito(int num){
    int cont = 0,
        Soma_impar;

    while(cont < num){
        if(cont %2 !=0){
           Soma_impar += 2;
        }

        if(Soma_impar == num){
            return "Numero informado e um quadrado perfeito";
        }else{
            return "Numero informado nao e um quadrado perfeito";
        }
    }
}
