/*Faça uma função que receba dois valores numéricos e um símbolo. Este s´ımbolo representara a operação que se deseja efetuar com os números. Se o símbolo for + devera´
ser realizada uma adição, se for  − uma subtração, se for / uma divisão e se for  ∗ sera´
efetuada uma multiplicação.*/

#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex13/inc/Ex13.h" 
#include <gtest/gtest.h>

using namespace std;


TEST(double num1,double num2, char a){
    EXPECT_EQ(Operacoes(2,4,'+'), 6);
    EXPECT_EQ(Operacoes(2,4,'*'), 8);
    EXPECT_EQ(Operacoes(6,4,'-'), 2);
    EXPECT_EQ(Operacoes(6,3,'/'), 2);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}