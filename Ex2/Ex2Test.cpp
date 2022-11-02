/*Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela ˆ
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
2000*/

#include <iostream>
#include <string>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex2/inc/Ex2.h"
#include <gtest/gtest.h>

using namespace std;


TEST(Data, testData){
  EXPECT_EQ(ImprimeDataAtual(2,10,2020), "\n2 de fevereiro de 2020");
}

int main(int argc, char **argv){
   testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
      
}