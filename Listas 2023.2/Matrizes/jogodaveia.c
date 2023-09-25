#include <stdio.h>

int verifica_jogada(char tab[3][3], int x, int y, char check){
	int res;
	
	if(tab[x][y] != '.') 
		return 2;
	else{
		tab[x][y] = check;
		//Verifica linha
		if(tab[x][0] == check && tab[x][1] == check && tab[x][2] == check)
			res = 1;
		//Verifica coluna
		else if(tab[0][y] == check && tab[1][y] == check && tab[2][y] == check)
			res =  1;
		//Verifica diagonal
		else if(x == y)
			if(tab[0][0] == check && tab[1][1] == check && tab[2][2] == check)
				res =  1;
			else if(tab[0][2] == check && tab[1][1] == check && tab[2][0] == check)
				res = 1;
			else res = 0;
		else if(x + y == 2)
			if(tab[0][2] == check && tab[1][1] == check && tab[2][0] == check)
				res = 1;
			else res = 0;
		else
			res =  0;

		tab[x][y] = '.';
		return res;
	}
}

int main(void) {
  	char tabuleiro[3][3], letra;
	int jogadas, x, y;

	for(int i = 0; i<3; i++)
		for(int j = 0; j<3; j++)
			scanf(" %c", &tabuleiro[i][j]);

	scanf("%d", &jogadas);

	for(int i = 0; i<jogadas; i++){
		scanf("%d %d %c", &x, &y, &letra);

		int res = verifica_jogada(tabuleiro, x-1, y-1, letra);

		switch(res){
			case 0: printf("Continua o jogo.\n"); break;
			case 1: printf("Boa jogada, vai vencer!\n"); break;
			case 2: printf("Jogada inválida!\n"); break;
		}
	}
	
  	return 0;
}