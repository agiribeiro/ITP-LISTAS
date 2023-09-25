#include <stdio.h>

void printVetor(float vetorDados[], int vetorIndices[], int maxIndice) {
    for (int i = 0; i < maxIndice; i++) {
        printf("%d (%.1f)", vetorIndices[i]+1, vetorDados[vetorIndices[i]]);
        if (i < maxIndice - 1)
            printf(", ");
    }
    printf("\n");
}

int main() {
    int n, l;
    scanf("%d", &n);
    
    float mp[n];
    int apr[n], rec[n], rep[n];
    int tapr = 0, trec = 0, trep = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d - %f", &l, &mp[i]);
        if (mp[i] >= 7.0)
            apr[tapr++] = i;
        if (mp[i] < 7.0 && mp[i] >= 5.0)
            rec[trec++] = i;
        if (mp[i] < 5.0)
            rep[trep++] = i;
    }
    
    printf("Aprovados: ");
    printVetor(mp, apr, tapr);
    printf("Recuperação: ");
    printVetor(mp, rec, trec);
    printf("Reprovados: ");   
    printVetor(mp, rep, trep);
}
