/*Escreva uma função que compare e retorne verdadeiro, caso uma string seja anagrama ˜
da outra, e falso, caso contrário.
*/

#include <iostream>
#include <string>
#include "Ex61.h"
#include <bits/stdc++.h>

using namespace std;
 

bool Anagrama(string palavra1, string palavra2)
{
    
    int tamanho1 = palavra1.length();
    int tamanho2 = palavra2.length();

    if (tamanho1 != tamanho2){
        return false;
    }
 

    sort(palavra1.begin(), palavra1.end());
    sort(palavra2.begin(), palavra2.end());
 
    for (int i = 0; i < tamanho1; i++){
        if(palavra1[i] != palavra2[i]){
           return false;
        }
        return true;
    }
 
    
}
