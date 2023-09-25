#include <stdio.h>

#define min(a,b) ((a) < (b) ? (a) : (b))

void print(int s, int mat[s][s]) {
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      printf("%i ", mat[i][j]);
    }
    printf("\n");
  }
}

int main(int argc, char const *argv[]) {
  int size;
  scanf("%i", &size);
  int mat[size][size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      int l = min(size-1-i, i);
      int c = min(size-1-j, j);
      mat[i][j] = min(l, c) + 1;
    }
  }
  print(size, mat);

  return 0;
}