/*Crie um programa que receba três valores (obrigatoriamente maiores que zero), repre- 
sentando as medidas dos tres lados de um triângulo. Elabore funções para: 
(a) Determinar se eles lados formam um triângulo, sabendo que: 
• O comprimento de cada lado de um triangulo  e menor do que a soma dos outros 
dois lados.
(b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. 
Sendo que:
• Chama-se equilatero o triângulo que tem três lados iguais. 
• Denominam-se isosceles o triângulo que tem o comprimento de dois lados 
iguais.
• Recebe o nome de escaleno o triangulo que tem os tres lados diferentes.*/

#include <iostream>
#include "Ex15.h"
#include <gtest/gtest.h>

using namespace std;


TEST (testEhtriangulo,testEhtriangulo){
    EXPECT_EQ(Ehtriangulo(3,3,3), true);
} 

TEST (testFormatriangulo,testEhtriangulo){
    EXPECT_EQ(Formatriangulo(3,3,3), "Triangulo Equilatero");
} 

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}