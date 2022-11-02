/*Faca uma função que dado um caractere qualquer retorne o mesmo caractere sempre ˜
em maiusculo.*/

#include <iostream>
#include "Ex66.h"
#include <gtest/gtest.h>

using namespace std;

char UpperCase(char Caracter);

TEST(testUpperCase, testUpperCase){
    char Caracter[] = "b",
         CaracterTest[] = "B";
    EXPECT_EQ(UpperCase(*Caracter),CaracterTest);
}

