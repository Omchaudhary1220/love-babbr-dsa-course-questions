#include <bits/stdc++.h>
void swap(int *p, int *q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}
void selectionSort(vector<int> &arr, int n) {
  int i, j, min;
  for (i = 0; i < n - 1; i++) {
    min = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    swap(&arr[i], &arr[min]);
  }
}
