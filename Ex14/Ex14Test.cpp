/*Faça uma função que receba a distância em ˆ Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:*/

#include <iostream>
#include "Ex14.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testConsumo, testConsumo){
    int Km = 16,
        consumoMuitoBaixo = 2,
        consumoAlto = 4,
        consumoBaixo = 1.95;
    EXPECT_EQ(Consumo(Km,consumoMuitoBaixo), "Consumo: 8.000000 Super economico");
    EXPECT_EQ(Consumo(Km,consumoAlto), "Consumo: 4.000000 Venda o carro");
    EXPECT_EQ(Consumo(Km,consumoBaixo), "Consumo: 8.421053 Economico");
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}