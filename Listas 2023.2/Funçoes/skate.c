#include <stdio.h>

#define MAX(A, B) ((A) > (B) ? (A) : (B))
#define MIN(A, B) ((A) < (B) ? (A) : (B))
	
int scoreResultante(int a, int b, int c) {
//	printf("%d %d %d -> ", a, b, c);
	int maior = MAX(a, MAX(b, c)), menor = MIN(a, MIN(b, c));
//	printf("%d\n", a+b+c-menor-maior);
	return a+b+c-menor-maior;
}

int scoreDia() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	return scoreResultante(a, b, c);
}

int scoreCompetidor() {
	int a, b, c;
	a = scoreDia();
	b = scoreDia();
	c = scoreDia();
	return scoreResultante(a, b, c);
}

int main() {

	int A, B;

	A = scoreCompetidor();
	B = scoreCompetidor();
	if(A == B)
		printf("empate\n");
	else if(A > B)
		printf("A\n");
	else
		printf("B\n");


	return 0;
}
