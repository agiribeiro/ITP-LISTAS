#include <stdio.h>

int ehLegal(int vetor[], int tam) {
    for (int i = 1; i < tam; i++)
        if (((vetor[i] - vetor[i-1]) % 2) != 0)
            return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
    
    if (ehLegal(vetor, n)) 
        printf("Legal\n");
    else
        printf("Chato\n");
}

    