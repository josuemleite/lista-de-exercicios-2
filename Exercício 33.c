#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int matrizA[2][3], matrizB[3][2], matrizMult[2][2], i, j;
	
	printf("Preencha a matriz A:\n");
	
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &matrizA[i][j]);
			
	printf("Matriz A:\n");	
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			printf("%3d |", matrizA[i][j]);
		printf("\n");
	}
	
	printf("Preencha a matriz B:\n");
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			scanf("%d", &matrizB[i][j]);
			
	printf("Matriz B:\n");	
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++)
			printf("%3d |", matrizB[i][j]);
		printf("\n");
	}
		
	int k, aux = 0;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			matrizMult[i][j] = 0;
			for (k = 0; k < 3; k++)
				aux += matrizA[i][k] * matrizB[k][j];
			matrizMult[i][j] = aux;
			aux = 0;
		}
	}
		
	printf("Matriz multiplicação:\n");	
			
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			printf("%3d |", matrizMult[i][j]);
		printf("\n");
	}
	
	return 0;
}
