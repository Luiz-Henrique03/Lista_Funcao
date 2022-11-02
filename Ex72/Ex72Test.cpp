/*Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3
, implemente uma func¸ao que calcule a soma de dois 
vetores. Essa func¸ao deve obedecer ao prototipo: 
void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res);
onde os parametros v1 e v2 são ponteiros para os vetores a serem somados, e o ˜
parametro res e um ponteiro para uma estrutura vetor onde o resultado da operação˜
deve ser armazenado.
*/

#include <gtest/gtest.h>
#include "Ex72.h"
#include <cmath>

TEST(testSomaVetor, testSomaVetor){
    float ResultadoEsperado = 842.177;
    Vetor v1 [1] = {{2,4,2.5}},
          v2 [1] = {{7.8,6,4}};
    Resultado res[1];

    EXPECT_EQ(Soma(v1,v2,res));
}