/*Faça uma função que receba 3 números inteiros como parâmetro, representando horas, ˆ
minutos e segundos, e os converta em segundos.
*/

#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST(testConverteSegundo, testConverteSegundo){
    EXPECT_EQ(converteParaSegundo(2,2,20),7340);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}