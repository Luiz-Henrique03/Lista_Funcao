#include <iostream>
#include "Ex73.h"

using namespace std;



int main(){
  Habitantes pessoas[5] = {{'M',27,Azuis,Preto},{'F',20,Castanhos,Louro},{'M',33,Castanhos,Preto},{'F',32,Azuis,Castanho},{'M',17,Castanhos,Castanho}};
  LeituradeDados(pessoas);
  cout << Media(pessoas) << endl;
  cout << maiorIdade(pessoas) << endl;
  cout << Media18e35(pessoas) << endl;

}