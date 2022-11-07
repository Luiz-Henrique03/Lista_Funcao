/*Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exem- 
plo, a saida para n = 4 seria:

*
**
***
****
***
**
**/

#include <iostream>
#include <string>
#include "Ex23.h"
#include <gtest/gtest.h>


using namespace std;


TEST(testImprimetriangulo, testImprimetriangulo){
    EXPECT_EQ(Imprimetriangulo(3), "\n*\n**\n***\n***\n**\n*\n");
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}