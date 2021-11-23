#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("N: ");
	scanf("%d", &n);
	
	int matriz[n][n], i, j;
	
	printf("Preencha a matriz:\n");
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &matriz[i][j]);
			
	printf("Matriz:\n");	
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%2d |", matriz[i][j]);
		printf("\n");
	}
	
	int soma = 0;
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			if (j == (n-1)-i)
				soma += matriz[i][j];
		}
		
	printf("A soma da diagonal secundária é: %d", soma);
	
	return 0;
}
