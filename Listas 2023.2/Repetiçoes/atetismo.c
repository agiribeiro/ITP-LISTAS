
#include <stdio.h>

int main(void){
	int n;
	char c;
	int count_j = 0;
	int count_r = 0;
	int count_t = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%c", &c);
		while(c != 'F'){
			switch(c){
				case 'C': count_r += 1; break;
				case 'S': count_j += 1; break;
				case 'L': count_t += 1; break;
			}
			scanf("%c", &c);
		}
	}
	printf("%d %d %d %d\n", count_r, count_j, count_t, count_r + count_j + count_t);
	return 0;
}
