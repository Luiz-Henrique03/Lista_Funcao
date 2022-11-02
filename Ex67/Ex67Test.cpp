/*Faça uma rotina que receba como parametro um vetor de caracteres e seu tamanho. ˆ
A função deverá de ler uma string do teclado, caractere por caractere usando a função˜
getchar() ate que o usuário digite enter ou o tamanho máximo do vetor seja alcançado. */


#include <iostream>
#include "Ex67.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testLerString, testLerString){
    char leituraTest[5] = {};
    char Leitura[5] = ['l','n','p'],
    LerString(leituraTest);
    EXPECT_EQ(Leitura,leituraTest);
}

