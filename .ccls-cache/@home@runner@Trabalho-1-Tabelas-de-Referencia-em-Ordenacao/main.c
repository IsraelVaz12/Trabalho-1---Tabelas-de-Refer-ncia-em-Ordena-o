#include "metodos_ord.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
  Produto prod[tam];
  Produto2 prod2[tam];
  clock_t tempo;
  clock_t total = 0;
  preencheVetAleatorio(prod, tam);
  imprimeVetor(prod,tam);

  int recebeint[tam];
  for (int i = 0; i < tam; i++)
    recebeint[i] = prod[i].numero;

  
  printf("\n--------- BubbleSort ----------\n");
   preencheVetAleatorio(prod, tam);
    tempo = clock();
    ordBolha(recebeint, tam);
    imprimeInt(recebeint, tam);
    
    //printf("\nTempo BubbleSort (Int): %f\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);

  printf("Tempo total do bubble = %f\n", total/ (double)CLOCKS_PER_SEC);

  // -------- bolha string --------
  palavra v[tam];
  for (int i = 0; i < tam; i++) {
    strcpy(prod2[i].descricao, prod[i].descricao);
  }
  tempo = clock();
  ordBolhaString(prod2, tam);
  printf("\n");
  imprimeProduto(prod2, tam);
  printf("Tempo BubbleSort (String): %f\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);

  printf("\n--------- ShellSort ----------\n");
  for (int i = 0; i < tam; i++)
    recebeint[i] = prod[i].numero;
  tempo = clock();
  ordShell(recebeint, tam);
  imprimeInt(recebeint, tam);
  printf("\nTempo ShellSort (Int): %f\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);

  // ------- shellsort string --------
  for (int i = 0; i < tam; i++) {
    strcpy(prod2[i].descricao, prod[i].descricao);
  }
  tempo = clock();
  ordShellString(prod2, tam);
  printf("\n");
  imprimeProduto(prod2, tam);
  printf("Tempo ShellSort (String): %f\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);

  printf("\n--------- Quick3Sort ----------\n");
  for (int i = 0; i < tam; i++)
    recebeint[i] = prod[i].numero;
  tempo = clock();
  quicksort_mediana_tres(recebeint, 0, tam-1);
  imprimeInt(recebeint, tam);
  printf("\nTempo Quick Mediana de 3 (Int): %f\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);

  // ------- quick3 string --------
  for (int i = 0; i < tam; i++) {
    strcpy(prod2[i].descricao, prod[i].descricao);
  }
  tempo = clock();
  quicksort_mediana_tresStr(prod2,0, tam-1);
  printf("\n");
  imprimeProduto(prod2, tam);
  printf("Tempo Quick Mediana de 3 (String): %f\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);


  printf("\n--------- PancakeSort ----------\n");
  for (int i = 0; i < tam; i++)
    recebeint[i] = prod[i].numero;
  tempo = clock();
  pancakeSort(recebeint, tam);
  imprimeInt(recebeint, tam);
  printf("\nTempo PancakeSort (Int): %f\n\n", (clock() - tempo) /  (double)CLOCKS_PER_SEC);


  // ------- Pancake string --------
  for (int i = 0; i < tam; i++) {
    strcpy(prod2[i].descricao, prod[i].descricao);
  }
  tempo = clock();
  pancakeSortStr(prod2, tam);
  printf("\n");
  imprimeProduto(prod2, tam);
  printf("Tempo PancakeSort (String): %f\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);

  printf("\n--------- CountingSort ----------\n");
   for (int i = 0; i < tam; i++)
    recebeint[i] = prod[i].numero;
  tempo = clock();
  countingSort(recebeint, tam);
  imprimeInt(recebeint, tam);
  printf("\nTempo CountingSort (Int): %f\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);

  printf("\n--------- BucketSort ----------\n");
  tempo = clock();
  bucketsort(recebeint, tam);
  imprimeInt(recebeint, tam);
  printf("\nTempo BubbleSort (Int): %f\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC);

  
  return 0;
}