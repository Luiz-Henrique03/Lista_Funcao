/*Escreva uma função que retorne a primeira posição de uma sub-string dentro de uma ˜
string. Caso a sub-string nao seja encontrada, a função deve retornar -1. */

#include <iostream>
#include "Ex60.h"
#include <string>
  
using namespace std;
  
int posSubString(string palavra){
        
    string substr = "dia";
  
    int posicao = str.find(subsstr);
    if (posicao != string::npos){
        return posicao;
    }else{
       return - 1;
    }   
}

