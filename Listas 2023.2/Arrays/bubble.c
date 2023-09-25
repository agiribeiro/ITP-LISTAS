#include <stdio.h>

void print_set(int n, int a[]) {
  for (int i = 0; i < n-1; i++) {
    printf("%i ", a[i]);
  }
  printf("%i\n", a[n-1]);
}

void bubble_sort(int n, int a[]) {
  int swapped;
  print_set(n, a);
  do {
    swapped = 0;
    for (int i = 1; i < n; i++) {
      if (a[i-1] > a[i]) {
        int aux = a[i];
        a[i] = a[i-1];
        a[i-1] = aux;
        swapped = 1;
      }
    }
    if (swapped) {
        print_set(n, a);
    }
  } while(swapped);
}

int main() {
  int n;
  
  scanf("%i", &n);
  int a[n];

  for(int i = 0; i < n; i++) {
    scanf("%i", &a[i]);
  }

  bubble_sort(n, a);

  return 0;
}