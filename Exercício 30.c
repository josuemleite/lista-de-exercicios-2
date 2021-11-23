#include <stdio.h>

int main(void) {
	
	int matriz[4][3], i, j;
	
	printf("Preencha a matriz 4x3:\n");
	
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &matriz[i][j]);
			
	printf("Matriz:\n");
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%2d |", matriz[i][j]);
		printf("\n");
	}
			
	int matrizTransposta[3][4];
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			matrizTransposta[i][j] = matriz[j][i];
			
	printf("Matriz transposta:\n");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%2d |", matrizTransposta[i][j]);
		printf("\n");
	}
	
	return 0;
}
