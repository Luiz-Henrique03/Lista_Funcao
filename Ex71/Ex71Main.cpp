/*
Considerando a estrutura:
struct Ponto{
int x;
int y;
};
para representar um ponto em uma grade 2D, implemente uma função que indique se um 
ponto p esta localizado dentro ou fora de um retangulo. O retangulo ˆ e definido por seus 
vertices inferior esquerdo v1 e superior direito v2. A função deve retornar 1 caso o ponto 
esteja localizado dentro do retangulo e 0 caso contrário. Essa funçao deve obedecer ao 
prototipo: 
int dentroRet (struct Ponto* v1, struct Ponto* v2, struct Ponto* p) */

#include <iostream>
#include "Ex71.h"
using namespace std;

int main(){
    Ponto v1[1] = {{10,20}};
    Ponto v2[1] = {{2,5}};
    Ponto p[1] = {};

  cout << DentroRet(v1, v2, p);

}