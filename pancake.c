#include "metodos_ord.h"

void flip(int arr[], int i)
{
 int temp, start = 0;
 while (start < i) {
  temp = arr[start];
  arr[start] = arr[i];
  arr[i] = temp;
  start++;
  i--;
 }
}
 
int findMax(int arr[], int n)
{
 int mi, i;
 for (mi = 0, i = 0; i < n; ++i)
  if (arr[i] > arr[mi])
   mi = i;
 return mi;
}
 
void pancakeSort(int* arr, int n)
{
 for (int curr_size = n; curr_size > 1; --curr_size) {
  int mi = findMax(arr, curr_size);
   
  if (mi != curr_size - 1) {
   flip(arr, mi);
   flip(arr, curr_size - 1);
  }
 }
}


void flipStr(Produto2 arr[], int i)
{
 Produto2 temp;
 int start = 0;
 while (start < i) {
  temp = arr[start];
  arr[start] = arr[i];
  arr[i] = temp;
  start++;
  i--;
 }
}
 
int findMaxStr(Produto2 arr[], int n)
{
 int mi, i;
 for (mi = 0, i = 0; i < n; ++i)
    if (arr[i].descricao[0] > arr[mi].descricao[0])
       mi = i;
 return mi;
}
 
void pancakeSortStr(Produto2* arr, int n){
 for (int curr_size = n; curr_size > 1; --curr_size) {
  int mi = findMaxStr(arr, curr_size); 
  if (mi != curr_size - 1) {
     flipStr(arr, mi);
     flipStr(arr, curr_size - 1);
  }
 }
}