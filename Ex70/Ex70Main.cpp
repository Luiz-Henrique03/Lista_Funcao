/*Um racional e qualquer numero da forma  p/q, sendo p inteiro e q inteiro nao nulo. ˜ E
conveniente representar um racional por um registro:
struct racional{
int p, q;
};
Vamos convencionar que o campo q de todo racional e estritamente positivo e que o 
maximo divisor comum dos campos  p e q e 1. Escreva 
(a) uma func¸ao reduz que receba inteiros a e b e devolva o racional que representa a/b; 
(b) uma func¸ao neg que receba um racional x e devolva o racional -x; 
(c) uma func¸ao soma que receba racionais x e y e devolva o racional que representa a 
soma de x e y;
(d) uma func¸ao mult que receba racionais x e y e devolva o racional que representa o 
produto de x por y;
(e) uma func¸ao div que receba racionais x e y e devolva o racional que representa o 
quociente de x por y*/

#include <iostream>

using namespace std;

struct racional{
int p, q;
};

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

int main(){
    racional Rac1[1] = {{10,5}};
    racional Rac2[1] = {{5,2}};

    racional Rac3[1] = {{6,3}};
    racional Rac4[1] = {{4,2}};

    float X = 0,
        Y = 0;

    X = reduz(Rac1, Rac2);
    Y = reduz(Rac3, Rac4);

    cout << Soma(X,Y) << endl;
    cout << Multiplicacao(X,Y) << endl;
    cout << Divisao(X,Y) << endl;
}