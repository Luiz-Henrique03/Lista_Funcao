/*Crie um programa contendo as seguintes func¸oes que recebem um vetor V números re- ´
ais como parametro: ˆ
• Impressao normal do vetor. ˜
• Impressao inversa. ˜
• Func¸ao que retorna a media aritmetica dos elementos do vetor.*/

#include <iostream>
#include "Ex46.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testVetor, testVetor){
    float Media = 0;
    float soma = 0;
    float vet[] = {80.25,10,20,14,18,10};

    
    for(int i = 0; i < 5; i++){
        soma += vet[i];
    }

    Media = soma / 5;

    EXPECT_EQ(Media,vetor[vet]);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}