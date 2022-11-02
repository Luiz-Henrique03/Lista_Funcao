/*Faça uma função que receba dois números e retorne qual deles é o maior.*/

#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex10/inc/Ex10.h" 
#include <gtest/gtest.h>

using namespace std;


TEST(testComparaDoisnumeros, testComparaDoisnumeros){
    EXPECT_EQ(ComparaDoisNumeros(2,4),4);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}