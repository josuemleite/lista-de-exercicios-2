#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, m;
	
	printf("Número de pilotos: ");
	scanf("%d", &n);
	printf("Número de voltas: ");
	scanf("%d", &m);
	
	float tempos[n][m];
	int i, j;
	
	for (i = 0; i < n; i++) {
		printf("Tempos do piloto %d:\n", i+1);
		for (j = 0; j < m; j++)
			scanf("%f", &tempos[i][j]);
	}
	
	float melhor, soma = 0, media;
	int volta;
	
	melhor = tempos[0][0];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (tempos[i][j] <= melhor) {
				melhor = tempos[i][j];
				volta = j+1;
			}
			soma += tempos[i][j];
		}
		media = soma / m;
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("O melhor tempo do piloto %d foi: %f\n", i+1, melhor);
		printf("A volta em que o melhor tempo ocorreu foi: %d\n", volta);
		printf("A média de tempos do piloto %d foi: %f\n", i+1, media);
		melhor = tempos[i+1][0];
		soma = 0;
	}
	
	return 0;
}
