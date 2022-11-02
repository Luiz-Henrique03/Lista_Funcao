#include <iostream>
#include "Ex73.h"

using namespace std;


void LeituradeDados(Habitantes p[5]){
    for(int i = 0; i < 5; i++){
        cout << p[i].corCabelo <<endl;
        cout << p[i].corOlho << endl;
        cout << p[i].idade << endl;
        cout << p[i].Sexo << endl;
        cout << "\n--------------------\n";
    }
}

float Media(Habitantes p[5]){
    float SomaOlhoCastanhoEcabeloPreto = 0,
        media = 0;

    for(int i = 0; i < 5; i++){
        if(p[i].corOlho == Castanhos && p[i].corCabelo == Preto){
            SomaOlhoCastanhoEcabeloPreto++;
        }

    }


    media =  (SomaOlhoCastanhoEcabeloPreto/5);
    return media;
}

int maiorIdade(Habitantes p[5]){
    int maiorIdade = p[0].idade;
    for(int i = 1; i < 5; i++){
        if(maiorIdade < p[i].idade){
            maiorIdade = p[i].idade;
        }
    }

    return maiorIdade;
}

float Media18e35(Habitantes p[5]){
     float Soma = 0,
        media = 0;

    for(int i = 0; i < 5; i++){
        if(p[i].corOlho == Azuis && p[i].corCabelo == Louro && p[i].idade > 18 && p[i].idade < 35){
            Soma++;
        }

    }

    media = (Soma/5);
}

