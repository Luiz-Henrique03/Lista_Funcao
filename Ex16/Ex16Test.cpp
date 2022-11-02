/*Faça uma func¸ao chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando ˜
varios símbolos de igual (Ex: ========). A função recebe por parâmetro quantos sinais ˆ
de igual serao mostrados*/

#include <iostream>
#include <string>
#include "Ex16.h"
#include <gtest/gtest.h>

using namespace std;

TEST(testDesenhaLinha, testDesenhaLinha){
    EXPECT_EQ(DesenhaLinha(10), "==========");
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}