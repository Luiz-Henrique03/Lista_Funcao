/*Faça uma função que receba duas strings e retorne a intercalação letra a letra da primeira 
com a segunda string. A string intercalada deve ser retornada na primeira string.*/

#include <iostream>
#include <string.h>
#include <gtest/gtest.h> 


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

TEST(testIntercala, testIntercala){
    char str1[10] = "Quinta",
         str2[10] = "Sexta",

    const strTest[20] = "QSueixnttaa";

    EXPECT_EQ(Intercala(str1,str2),strTest);
}
