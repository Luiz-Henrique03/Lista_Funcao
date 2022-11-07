/*Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado ´
perfeito e um número inteiro não negativo que pode ser expresso como o quadrado de ˜
outro numero inteiro. Ex: 1, 4, 9... */

#include <iostream>
#include "Ex4.h"
#include <gtest/gtest.h>

using namespace std;



TEST(Testquadradoperfeito, Testquadradoperfeito){
    EXPECT_EQ(eQuadradoPefeito(25),"Numero informado e um quadrado perfeito");
    EXPECT_EQ(eQuadradoPefeito(2),"Numero informado nao e um quadrado perfeito");
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}