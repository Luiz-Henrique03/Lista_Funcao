/*Fac¸a uma func¸ao n ˜ ao-recursiva que receba um n ˜ umero inteiro positivo ´ n e retorne o hiperfatorial desse numero. O hiperfatorial de um n ´ umero ´ n, escrito H(n), e definido por: ´
H(n) = Qn k=1 k k = 11 · 2 2 · 3 3 . . .(n − 1)n−1 · n
*/

#include <iostream>
#include "Ex37.h"
#include <cmath>
#include "gtest/gtest.h"

using namespace std;



TEST(testHiperFat, testHiperFat){
    EXPECT_EQ(27648,HiperFat(4));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}