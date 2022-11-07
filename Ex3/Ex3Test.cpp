/*Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor ´
de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0*/

#include <iostream>
#include "Ex3.h"
#include <gtest/gtest.h>

using namespace std;

TEST(Testverificapositivo, verificapositivo){
    EXPECT_EQ(verificaPositivoNegativo(3),1);
    EXPECT_EQ(verificaPositivoNegativo(-2),-1);
    EXPECT_EQ(verificaPositivoNegativo(0),0);
}

int main(int argc, char **argv){
   testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
      
}