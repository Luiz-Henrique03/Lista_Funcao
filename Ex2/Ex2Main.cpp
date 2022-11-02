#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex2/inc/Ex2.h"

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