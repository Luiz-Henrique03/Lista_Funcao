/*Faça um programa que faça operac¸oes simples de frações: 
• Crie e leia duas frac¸oes ˜ p e q, compostas por numerador e denominador.
• Encontre o maximo divisor comum entre o numerador e o denominador, e simplifi- ´
que as frações. 
• Apresente a soma, a subtração, o produto e o quociente entre as frações lidas. ˜
Obs.: Cria uma func¸ao para cada item.*/

#include <iostream>
#include "Ex69.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testFracao, testfracao){
    int num1 = 4,
        num2 = 2,
        num3 = 6,
        num4 = 2,
        resSomaNumeradortest = 10,
        resSomaDenominadortest = 2,
        resSubtracaoNumeradortest = -2,
        resSubtracaDenominadortest = 2,
        resMultiNumeradortest = 10,
        resMultiDenominadortest = 4,
        resDivNumeradortest = 8,
        resDivDenominadortest = 12;
        
    Criafracao(num1,num2,num3,num4);
    EXPECT_EQ(resNumeradorSoma,resSomaNumeradortest);
    EXPECT_EQ(resDenominadorSoma,resSomaDenominadortest);
    EXPECT_EQ(resNumeradorMulti,resMultiNumeradortest);
    EXPECT_EQ(resDenominadorMulti,resMultiDenominadortest);
    EXPECT_EQ(resNumeradorSub,resSubNumeradortest);
    EXPECT_EQ(resDenominadorSub,resSubDenominadortest);
    EXPECT_EQ(resNumeradorDivisao,resDivNumeradortest);
}

