/*Faça uma função não-recursiva que receba um número inteiro positivo N e retorne o ´
superfatorial desse numero. O superfatorial de um número N é definida pelo produto dos ´
N primeiros fatoriais de N. Assim, o superfatorial de 4 e´ sf(4) = 1! * 2! * 3! * 4! = 288.
*/

#include <iostream>
#include "Ex36.h"
#include <gtest/gtest.h>


TEST(testSuperfat, testSuperfat){
    EXPECT_EQ(288,SuperFat(4));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}