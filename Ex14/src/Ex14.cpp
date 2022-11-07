#include <iostream>
#include "Ex14.h"

using namespace std;

string Consumo(float km, float litro){
    float Consumo = km/litro;


    if(Consumo < 8){
        return "Consumo: "+to_string(Consumo)+" Venda o carro";
    }else if(Consumo > 8 && Consumo <= 12){
        return "Consumo: "+to_string(Consumo)+" Economico";
    }else{
        return "Consumo: "+to_string(Consumo)+" Super economico";
    }
}

