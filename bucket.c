#include "metodos_ord.h"
#include <stdlib.h>
#define tamanho 10
struct balde {
  int qtd;
  int valores[tamanho];
};
typedef struct balde balde;

void bucketsort(int v[], int n) {
  int maior, menor, nroBaldes, pos;
  balde *bd;

  maior = menor = v[0];
  for (int i = 1; i < n; i++) {
    if (v[i] > maior)
      maior = v[i];
    if (v[i] < menor)
      menor = v[i];
  }

  nroBaldes = (maior - menor) / tam + 1;
  bd = (balde *)malloc(nroBaldes * sizeof(balde));
  for (int i = 0; i < nroBaldes; i++)
    bd[i].qtd = 0;

  for (int i = 0; i < n; i++) {
    pos = (v[i] - menor) / tamanho;
    bd[pos].valores[bd[pos].qtd] = v[i];
    bd[pos].qtd++;
  }

  pos = 0;
  for (int i = 0; i < nroBaldes; i++) {
    ordBolha(bd[i].valores, bd[i].qtd);
    for (int j = 0; j < bd[i].qtd; j++) {
      v[pos] = bd[i].valores[j];
      pos++;
    }
  }
  free(bd);
}
/*
void bucketsortStr(Produto2 v[], int n) {
  int nroBaldes, pos;
  balde *bd;
  Produto2 maior, menor;

  maior = menor = v[0];
  for (int i = 1; i < n; i++) {
    if (v[i].descricao[0] > maior.descricao[0])
      maior = v[i];
    if (v[i].descricao[0] < menor.descricao[0])
      menor = v[i];
  }

  nroBaldes = 5;
  bd = (balde *)malloc(nroBaldes * sizeof(balde));
  for (int i = 0; i < nroBaldes; i++)
    bd[i].qtd = 0;

  for (int i = 0; i < n; i++) {
    pos = (v[i] - menor) / tamanho;
    bd[pos].valores[bd[pos].qtd] = v[i];
    bd[pos].qtd++;
  }

  pos = 0;
  for (int i = 0; i < nroBaldes; i++) {
    ordBolha(bd[i].valores, bd[i].qtd);
    for (int j = 0; j < bd[i].qtd; j++) {
      v[pos] = bd[i].valores[j];
      pos++;
    }
  }
  free(bd);
}
*/