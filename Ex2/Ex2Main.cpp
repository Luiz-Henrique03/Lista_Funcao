/*Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela ˆ
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
2000*/

#include <iostream>
#include "Ex2.h"

using namespace std;


int main(){

  int dia,
      mes,
      ano;

  cout << "Digite o dia, mes e ano: " << endl;
  cin >> dia;
  cin >> mes;
  cin >> ano;
  cout << ImprimeDataAtual(dia,mes,ano);
      
}