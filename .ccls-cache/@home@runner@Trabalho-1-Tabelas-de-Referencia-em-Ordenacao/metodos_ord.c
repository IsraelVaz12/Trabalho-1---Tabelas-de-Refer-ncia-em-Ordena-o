#define tam 10

struct produto {
  char descricao[30];
  int numero;
};
typedef struct produto Produto;

struct produto2 {
  char descricao[30];
};
typedef struct produto2 Produto2;

typedef char palavra[30];

void preencheVetAleatorio(Produto p[], int n);
void imprimeVetor(Produto p[], int n);
void imprimeInt(int *a, int n);
void imprimeProduto(Produto2 p[], int n);

void ordBolha(int v[], int n);
void ordBolhaString(Produto2 v[], int t);
void ordShell(int v[], int n);
void ordShellString(Produto2 v[], int t);