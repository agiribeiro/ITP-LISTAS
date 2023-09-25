
#include <stdio.h>

int main(void){
	int count = 0;
	int count_series = 0;
	int qtd_series = 1;
	float value;
	float threshold;
	scanf("%f %f", &threshold, &value);
	while(value != -1.0){
		if(value <= threshold){
			count += 1;
			count_series += 1;
			if(count_series > 8){
				qtd_series += 1;
				count_series = 0;
			}
		}
		scanf("%f", &value);
	}
	if(count == 0){
		printf("0 0\n");
	} else {
		printf("%d %d\n", count, qtd_series);
	}
	return 0;
}
