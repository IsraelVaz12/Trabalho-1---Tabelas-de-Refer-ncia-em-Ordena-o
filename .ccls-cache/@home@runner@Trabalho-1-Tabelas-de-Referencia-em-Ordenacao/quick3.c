#include "metodos_ord.h"
#include <string.h>

void troca(int A[], int p, int m){
   int temp;
   temp = A[p];
   A[p] = A[m];
   A[m] = temp;
}
int particao(int v[],int esq,int dir){
  int i, fim;

  fim=esq;
  for(i=esq+1;i<=dir;i++)
    if(v[i]<v[esq]) {
       fim=fim+1;
       troca(v,fim,i);
    }
  troca(v,esq,fim);
  return fim;
}

void trocaStr(Produto2 A[], int p, int m){
   Produto2 temp;
   temp = A[p];
   A[p] = A[m];
   A[m] = temp;
}

int particaoStr(Produto2 v[],int esq,int dir){
  int i, fim;

  fim=esq;
  for(i=esq+1;i<=dir;i++)
    if(v[i].descricao[0]<v[esq].descricao[0]) {
       fim=fim+1;
       trocaStr(v,fim,i);
    }
  trocaStr(v,esq,fim);
  return fim;
}

void quicksort_mediana_tres(int v[], int esq, int dir) {
   int i;
   if(dir <= esq) return;
   troca(v, (esq+dir)/2, esq+1);
   if(v[esq] > v[esq+1])
      troca(v, esq, esq+1);
   if(v[esq] > v[dir])
      troca(v, esq, dir);
   if(v[esq+1] > v[dir])
      troca(v, esq+1, dir);
   i = particao(v, esq+1, dir-1);
   quicksort_mediana_tres(v, esq, i-1);
   quicksort_mediana_tres(v, i+1, dir);
 }

void quicksort_mediana_tresStr(Produto2 v[], int esq, int dir) {
   int i;
   if(dir <= esq) return;
   trocaStr(v, (esq+dir)/2, esq+1);
   if(v[esq].descricao[0] > v[esq+1].descricao[0])
      trocaStr(v, esq, esq+1);
   if(v[esq].descricao[0] > v[dir].descricao[0])
      trocaStr(v, esq, dir);
   if(v[esq+1].descricao[0] > v[dir].descricao[0])
      trocaStr(v, esq+1, dir);
   i = particaoStr(v, esq+1, dir-1);
   quicksort_mediana_tresStr(v, esq, i-1);
   quicksort_mediana_tresStr(v, i+1, dir);
 }