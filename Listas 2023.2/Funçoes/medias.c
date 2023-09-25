#include <stdio.h>

float calculaMedia(char tipo, float n1, float n2, float n3) {
    float media = 0;
    if (tipo == 'A') {
        media = (n1 + n2 + n3) / 3;
    }
    if (tipo == 'P') {
        media = ((n1 * 4) + (n2 * 5) + (n3 * 6)) / 15;
    }
    return media;
}

int main() {
    char tipo;
    float n1, n2, n3;
    scanf("%s", &tipo);
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Média %.2f", calculaMedia(tipo, n1, n2, n3));
    return 0;
}