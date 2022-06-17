#include <string.h>
#include "metodos_ord.h"

void ordShell(int v[], int n) {
  int i, j, k, h = 1;
  int aux;

  do {
    h = h * 3 + 1;
  } while (h < n);

  do {
    h /= 3;
    for (i = h; i < n; i++) {
      aux = v[i];
      j = i;
      while (v[j - h] > aux) {
        v[j] = v[j - h];
        j -= h;
        if (j < h)
          break;
      }
      v[j] = aux;
    }
  } while (h != 1);
}

void ordShellString(Produto2 *v, int n) {
 int i, j, h = 1;
 Produto2 aux;

 do { h = h * 3 + 1; } while (h < n);

 do {
   h /= 3; // h = ( h – 1 ) / 3
   for(i = h ; i < n ; i++) {
     aux = v[i]; 
    j = i;
     while (v[j - h].descricao[0] > aux.descricao[0]) {
     v[j] = v[j - h]; 
     j -= h;
     if (j < h) break;
   }
    strcpy(v[j].descricao,aux.descricao);
   }
  } while (h != 1);
}
