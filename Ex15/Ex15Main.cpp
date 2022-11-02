#include <iostream>
#include "Ex15.h"

using namespace std;


int main(){

    int LadoTriangulo1,
        LadoTriangulo2,
        LadoTriangulo3;

        cout << "Informe o valor dos tres lados de um triangulo\n";
        do{
        cin >> LadoTriangulo1;
        cin >> LadoTriangulo2;
        cin >> LadoTriangulo3;
        }while(LadoTriangulo1 < 0 && LadoTriangulo2 < 0 && LadoTriangulo3 < 0);

    cout << "Estes velores formam um triangulo: " << Ehtriangulo(LadoTriangulo1,LadoTriangulo2,LadoTriangulo3) << endl;
    cout << "Forma do triangulo: " << Formatriangulo(LadoTriangulo1,LadoTriangulo2,LadoTriangulo3) << endl; 
    

    return 0;
}