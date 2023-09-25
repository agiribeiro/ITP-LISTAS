#include <stdio.h>
#include <stdlib.h>

int somaDivisores(int x) {

	int soma = 0;
	for(int i = 1; i < x; i++)
		if(x%i == 0) {
			soma += i;
		}
	return soma;
}

int main() {

	int a, b;
	scanf("%d %d", &a, &b);
	if(abs(somaDivisores(a) - b) < 3 && abs(somaDivisores(b) - a) < 3)
		printf("S\n");
	else
	    printf("N\n");

	return 0;
}

