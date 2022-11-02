typedef enum{
  Azuis = 1, Castanhos
} CordosOlhos;

typedef enum{
  Louro = 1, Preto, Castanho
} CordoCabelo;


struct Habitantes{
    char Sexo[1];
    int idade;
    CordosOlhos corOlho;
    CordoCabelo corCabelo;
};


void LeituradeDados(Habitantes p[5]);

float Media(Habitantes p[5]);

int maiorIdade(Habitantes p[5]);

float Media18e35(Habitantes p[5]);