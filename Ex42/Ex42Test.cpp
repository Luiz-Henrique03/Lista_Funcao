/* Faça uma função que receba um vetor de reais e retorne a média dele*/


#include <iostream>
#include <gtest/gtest.h>

using namespace std;

float MediaVetor(int * vetor){
    float Media = 0;
    float soma = 0;
    for(int i = 0; i < 5; i++){
        soma += vetor[i];
    }

    Media = soma / 5;

    return Media;
}

TEST(testMediaVetor, testMediaVetor){
    int vetor [5] = {10,10,10,10,10};
    EXPECT_EQ(10, MediaVetor(vetor));

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}