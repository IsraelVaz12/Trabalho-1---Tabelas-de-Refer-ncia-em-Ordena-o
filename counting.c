#define K 1000
void countingSort(int *V, int N) {
  int i, j, k;
  int baldes[K];
  for (i = 0; i < K; i++) {
    baldes[i] = 0;
  }
  for (i = 0; i < N; i++) {
    baldes[V[i]]++;
  }
  for (i = 0, j = 0; j < K; j++) {
    for (k = baldes[j]; k > 0; k--) {
      V[i++] = j;
    }
  }
}