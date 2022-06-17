#include "metodos_ord.h"
#include <string.h>

void ordBolha(int v[], int n) {
  int i, j;
  int temp;
  char troca;

  troca = 'v';

  for (i = n - 1; (i >= 1) && (troca == 'v'); i--) {
    troca = 'f';
    for (j = 0; j < i; j++) {
      if (v[j] > v[j + 1]) {
        temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
        troca = 'v';
      }
    }
  }
}

void ordBolhaString(Produto2 v[], int t) {
  int i, j, troca = 0, compara = 0;
  char temp[30];

  for (i = t; i > 0; i--) {
    for (j = 0; j < i - 1; j++) {
      compara++;
      if (strcmp(v[j].descricao, v[j + 1].descricao) > 0) {
        troca++;
        strcpy(temp, v[j].descricao);
        strcpy(v[j].descricao, v[j + 1].descricao);
        strcpy(v[j + 1].descricao, temp);
      }
    }
  }
}