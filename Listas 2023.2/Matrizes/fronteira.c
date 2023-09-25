#include <stdio.h>

int checa_monstro(int lin, int col, char mat[lin][col]){
	int cont = 0;

	for(int i=0; i<lin; i++)
		for(int j=0; j<col; j++)
			if(mat[i][j] == 'X')
				cont++;

	return cont;
}

double calcula_porcentagem(int lin, int col, char mat[lin][col], char simbolo){
	int cont = 0;
	int total = lin*col;

	for(int i=0; i<lin; i++)
		for(int j=0; j<col; j++)
			if(mat[i][j] == simbolo)
				cont++;

	return ((double)cont/total)*100;
}

void classifica_planeta(double water, double barren, double forest, double desert, int monster){
	if(monster > 0)
		printf("Planeta Hostil\n");
	else{
		if(water >= 85.0) printf("Planeta Aquático\n");
		else if(desert >= 60.0) printf("Planeta Desértico\n");
		else if(forest >= 65.0) printf("Planeta Selvagem\n");
		else if(water >= 50.0 && forest >= 20.0) printf("Planeta Classe M\n");
		else printf("Planeta Inóspito\n");
	}
}

int main(){
	int n, m;
	double agua, terra, floresta, deserto;
	int monstros;

	scanf("%d %d", &n, &m);

	char planeta[n][m];

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf(" %c", &planeta[i][j]);

	monstros = checa_monstro(n, m, planeta);

	agua = calcula_porcentagem(n, m, planeta, '~');
	deserto = calcula_porcentagem(n, m, planeta, '^');
	floresta = calcula_porcentagem(n, m, planeta, '*');
	terra = calcula_porcentagem(n, m, planeta, '.');

	/*printf("AGUA %.2lf\n", agua);
	printf("SOLO %.2lf\n", terra);
	printf("DESERTO %.2lf\n", deserto);
	printf("FLORESTA %.2lf\n", floresta);
	printf("MONSTRO %d\n", monstros);*/

	classifica_planeta(agua, terra, floresta, deserto, monstros);

	return 0;
}