// Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro. 

#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex1/inc/Ex1.h"
#include <gtest/gtest.h>

using namespace std;

TEST(TestaResultado, dobro){
    int NumDobro = 2 * 2;
    EXPECT_EQ(Dobro(2),NumDobro);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}