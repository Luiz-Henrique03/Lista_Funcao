/*Faça uma função que retorne o maior fator primo de um número*/

#include <iostream>
#include "Ex19.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testMaxprimo,testMaxprimo){
    EXPECT_EQ(maxPrimo(6),5);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}