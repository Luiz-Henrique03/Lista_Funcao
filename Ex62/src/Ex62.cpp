/*Crie uma função que calcula o comprimento de uma string e que possui a seguinte ˜
assinatura: void tamanho(char *str, int *strsize).*/

#include <iostream>
#include "Ex62.h"
#include <string>
using namespace std;

void Tamanho(char *str, int* strsize){
    int tamanho = 0;
    while(str[tamanho] != '\0'){
        tamanho++;
        *strsize = tamanho;
    } 
}

