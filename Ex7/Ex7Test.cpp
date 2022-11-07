/*Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida ˜
em graus Fahrenheit. A formula de conversão˜ é: F = C ∗ (9.0/5.0) + 32.0, sendo F a
temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <iostream>
#include "Ex7.h" 
#include <gtest/gtest.h>

using namespace std;

double temperatura(int Celsius){
    return Celsius * (9/5) + 32;
}

TEST(testConversãotemperatura,testConversãotemperatura){
    EXPECT_EQ(temperatura(20),52);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}