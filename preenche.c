#include "metodos_ord.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetAleatorio(Produto p[], int tamanho) {
  int i, j, t_desc, c_pos;
  char caracteres[] =
      "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

  srand(time(NULL));
  for (j = 0; j < tamanho; j++) {
    p[j].numero = rand() % 1000;   // numero do produto aleatorio
    t_desc = (rand() % 15) + 5;    // tamanho da descrição (entre 5 e 20)
    for (i = 0; i < t_desc; i++) { // descricao aleatoria
      c_pos = rand() % 62;         // posição na string caracteres A-9
      p[j].descricao[i] = caracteres[c_pos];
    }
    p[j].descricao[i] = '\0';
  }
}

void imprimeVetor(Produto p[], int tamanho) {
  int j;
  for (j = 0; j < tamanho; j++) {
    printf("> %d %s\n", p[j].numero, p[j].descricao);
  }
}

void imprimeInt(int *a, int N) {
  int i;

  printf("\nElementos: ");
  for (i = 0; i < N; i++)
    printf("%d ", a[i]);
  printf("\n");
}

void imprimeProdutoInt(Produto v[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", v[i].numero);
  printf("\n");
}

void imprimeProduto(Produto2 v[], int n) {
  for (int i = 0; i < n; i++)
    printf("%s\n", v[i].descricao);
  printf("\n");
}