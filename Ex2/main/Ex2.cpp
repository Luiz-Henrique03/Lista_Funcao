#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex2/inc/Ex2.h" 
#include <string>

using namespace std;

string ImprimeDataAtual(int dia, int mes, int ano){
    string Mes_Escrito = "";
    switch(mes){
        case 1:
          Mes_Escrito = "Janeiro";
          break;
        case 2:
          Mes_Escrito = "Fevereiro";
          break;
        case 3:
          Mes_Escrito = "Março";
          break;
        case 4:
          Mes_Escrito = "Abril";
          break;
        case 5:
          Mes_Escrito = "Maio";
          break;
        case 6:
          Mes_Escrito = "Junho";
          break;
        case 7:
          Mes_Escrito = "Julho";
          break;
        case 8:
          Mes_Escrito = "Agosto";
          break;
        case 9:
          Mes_Escrito = "Setembro";
          break;
        case 10:
          Mes_Escrito = "Outubro";
          break;
        case 11:
          Mes_Escrito = "Novembro";
          break;
        case 12:
          Mes_Escrito = "Dezembro";
          break;
    }

    
    return "\n"+to_string(dia) + " de " + Mes_Escrito + " de " + to_string(ano);
}

