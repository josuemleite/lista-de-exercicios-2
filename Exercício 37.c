#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define MIN (-2f)
#define MAX (100f)

double randf (double min, double max) {
	return min + (rand() / (RAND_MAX / (max - min)));
}

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float matriz[12][12], soma = 0, media = 0;
	int i, j, cont = 0;
	
	srand(time(NULL));
	
	for (i = 0; i < 12; i++){
		for (j = 0; j < 12; j++){
			matriz[i][j] = randf(-2, 100);
		}
	}
	
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			if (j != (11-i)) {
				soma += matriz[i][j];
				cont++;
			} else {
				break;
			}
		}
	}
	
	media = soma / cont;
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~     MATRIZ     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			printf("%4.1f |", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	char caractere;
	
	printf("S ou M: ");
	scanf("%c", &caractere);
	
	if (caractere == 'S')
		printf("Soma: %.1f\n", soma);
	else if (caractere == 'M')
		printf("Média: %.1f\n", media);
	
	return 0;
}
