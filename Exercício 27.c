#include <stdio.h>

int main(void) {
	
	int n;
	
	printf("N: ");
	scanf("%d", &n);
	
	int matrizA[n][n], matrizB[n][n], i, j;
	
	printf("Preencha a matriz A:\n");
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &matrizA[i][j]);
	
	printf("Preencha a matriz B:\n");
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &matrizB[i][j]);
			
	int matrizSoma[n][n];
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
			
	printf("Matriz soma:\n");
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%2d |", matrizSoma[i][j]);
		printf("\n");
	}
	
	return 0;
}
