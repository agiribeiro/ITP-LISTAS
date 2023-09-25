#include <stdio.h>

int in_set(int n, int a[], int value) {
  for (int i = 0; i < n; i++) {
    if (a[i] == value) {
      return 1;
    }
  }
  return 0;
}

int union_set(int n, int a[], int m, int b[], int c[]) {
  for (int i = 0; i < n; i++) {
    c[i] = a[i];
  }
  int p = n;
  for (int i = 0; i < m; i++) {
    if (!in_set(n, a, b[i])) {
      c[p] = b[i];
      p++;
    }
  }
  return p;
}

int intersection_set(int n, int a[], int m, int b[], int c[]) {
  int p = 0;
  for (int i = 0; i < n; i++) {
    if (in_set(m, b, a[i])) {
      c[p] = a[i];
      p++;
    }
  }
  return p;
}

void bubble_sort(int n, int a[]) {
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      if (a[i] > a[j]) {
        int aux = a[j];
        a[j] = a[i];
        a[i] = aux;
      }
    }
  }
}

int diff_sym(int n, int a[], int m, int b[], int c[]) {
  int max = n + m;
  int un[max];
  int nu = union_set(n, a, m, b, un);
  int in[max];
  int ni = intersection_set(n, a, m, b, in);
  int count = 0;
  for (int i = 0; i < nu; i++) {
    if (!in_set(ni, in, un[i])) {
      c[count] = un[i];
      count++;
    }
  }
  return count;
}

void print_set(int n, int a[]) {
  if (n > 0) {
    for (int i = 0; i < n-1; i++) {
      printf("%i ", a[i]);
    }
    printf("%i\n", a[n-1]);
  }
}

int main() {
  int n, m;
  
  scanf("%i %i", &n, &m);
  int t = n + m;
  int a[n];
  int b[m];
  int c[t];

  for(int i = 0; i < n; i++) {
    scanf("%i", &a[i]);
  }

  for(int i = 0; i < m; i++) {
    scanf("%i", &b[i]);
  }

  int size = diff_sym(n, a, m, b, c);
  bubble_sort(size, c);
  print_set(size, c);

  return 0;
}