#include <stdio.h>

int main(void) {
	
	int n, m;
	
	printf("Linha e coluna: ");
	scanf("%d%d", &n, &m);
	
	int matriz[n][m], i, j;
	
	printf("Preencha a matriz:\n");
	
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &matriz[i][j]);
			
	printf("Matriz:\n");
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%2d |", matriz[i][j]);
		printf("\n");
	}
			
	int num;
	
	printf("Valor: ");
	scanf("%d", &num);
	
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			matriz[i][j] = matriz[i][j] * num;
			
	printf("Resultado:\n");
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%2d |", matriz[i][j]);
		printf("\n");
	}
	
	return 0;
}
