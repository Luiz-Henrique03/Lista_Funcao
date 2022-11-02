/* Faça uma função que recebe, por parâmetro, 2 vetores de 10 elementos inteiros e que ˆ
calcule e retorne, tambem por parâmetro, o vetor união dos dois primeiros. */

#include <iostream>
#include "Ex59.h"
#include <gtest/gtest.h>


TEST(testUniao, testUniao){
    int a[10] = {1,4,5,7,8,9,6,3,1,4},
        b[10] = {4,7,8,9,1,0,1,6,2,1},
        test[20] = {0};
    int tamanho = 20;
   for(int i = 0; i < tamanho; i++){
    if(a[i] == b[i]){
         tamanho--;
      }
      test[i] = a[i];
   }
    for(int j = 0; j < tamanho; j++){
    if(a[j] == b[j]){
         tamanho--;
      }
      test[j] = b[j];
    }
   EXPECT_EQ(Uniao(a,b),test);

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}