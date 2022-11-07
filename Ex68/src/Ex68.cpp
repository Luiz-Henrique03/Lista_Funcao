#include <iostream>
#include <string.h>


using namespace std;

string Intercala(char str1[10], char str2[10]){
    int i,
        j,
        cont;

    char Intercalacao[20];


    for(i = 0,j = 0,cont = 0; cont < 20 ; cont++){
          if(cont%2 == 0){
              Intercalacao[cont] = str1[i];
              i++;
          }else{
              Intercalacao[cont] = str2[j];
              j++;
          }

    }

    Intercalacao[cont] = '\n';

    return Intercalacao;
}

