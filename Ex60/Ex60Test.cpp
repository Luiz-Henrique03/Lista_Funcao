/*Escreva uma função que retorne a primeira posição de uma sub-string dentro de uma ˜
string. Caso a sub-string nao seja encontrada, a função deve retornar -1. */

#include <iostream>
#include <string>
#include "Ex60.h"
#include <gtest/gtest.h>
  
using namespace std;
  


TEST(testposSubString, testposSubString){
    string frase = "Bom dia";
    int posicao = 3;
    EXPECT_EQ(posSubString(frase),posicao);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}