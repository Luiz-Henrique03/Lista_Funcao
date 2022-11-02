/*Escreva uma função que compare e retorne verdadeiro, caso uma string seja anagrama ˜
da outra, e falso, caso contrário.
*/

#include <iostream>
#include <string>
#include "Ex61.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string palavra1 = "alegria",
           palavra2 = "alergia";
 
    
    cout << Anagrama(palavra1,palavra2);
    
}