/*Faça uma func¸ao chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando ˜
varios símbolos de igual (Ex: ========). A função recebe por parâmetro quantos sinais ˆ
de igual serao mostrados*/

#include <iostream>
#include "Ex16.h"

using namespace std;


int main(){
    int qtd;

    cout << "Informe a quantidade de iguais que voce deseja" << endl;
    cin >> qtd;

    DesenhaLinha(qtd);
}