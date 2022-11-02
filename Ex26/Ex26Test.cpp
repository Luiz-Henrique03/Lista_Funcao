/*Faça um algoritmo que receba um numero inteiro positivo  n e calcule o somatorio de 1 ´
até n.
*/

#include <iostream>
#include "Ex26.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testSomatorio, testSomatorio){
    EXPECT_EQ(Somatorio(5),10);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}