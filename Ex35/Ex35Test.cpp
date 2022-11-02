/*Faça uma função não-recursiva que receba um número inteiro positivo  n e retorne o fatorial quadruplo desse número. O fatorial quádruplo de um número  n e dado por: ´
(2n)!/ n!
*/

#include <iostream>
#include "Ex35.h"
#include <gtest/gtest.h>



TEST(testfatorialQuad,testfatorialQuad){
    EXPECT_EQ(30240,fatorialQuad(5));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}