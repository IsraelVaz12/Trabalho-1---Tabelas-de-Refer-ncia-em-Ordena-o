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
void imprimeProdutoInt(Produto p[], int n);

void ordBolha(int v[], int n);
void ordBolhaString(Produto2 v[], int t);
void ordShell(int v[], int n);
void ordShellString(Produto2 v[], int t);

void quicksort_mediana_tres (int v[], int esq, int dir);
void quicksort_mediana_tresStr(Produto2 v[], int esq, int dir);

void pancakeSort(int* arr, int n);
void pancakeSortStr(Produto2* arr, int n);

void countingSort(int *V,int N);

void bucketsort(int v[], int n);
void bucketsortStr(Produto2 v[], int n);