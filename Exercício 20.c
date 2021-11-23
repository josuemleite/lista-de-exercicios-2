#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	srand(time(NULL));
	
	int n, m;
	
	n = 1 + (rand() % 10);
	m = 1 + (rand() % 10);
	
	printf("Matriz[%d][%d]\n", n, m);
	
	int matriz[n][m], i, j;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			matriz[i][j] = rand() % 100;
			printf("  %d  |", matriz[i][j]);
		}
		printf("\n");
	}
	
	int menor = matriz[0][0];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (matriz[i][j] < menor)
				menor = matriz[i][j];
		}
	}
	
	printf("O menor valor da matriz é: %d\n", menor);
	
	return 0;
}
