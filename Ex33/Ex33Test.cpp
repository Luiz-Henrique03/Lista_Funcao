/*Faça uma função que receba um número N e retorne a soma dos algarismos de N!. Ex: ´
se N = 4, N! = 24. Logo, a soma de seus algarismos e 2 + 4 = 6.*/

#include <iostream>
#include "Ex33.h"
#include <gtest/gtest.h>


using namespace std;


TEST(testSomaAlgarismoFatorial, testSomaAlgarismoFatorial){
   EXPECT_EQ(SomaAlgarismoFatorial(4),6)
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}