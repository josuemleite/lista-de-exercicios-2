#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(void) {
	
	int matriz[100][100], n, m, i, j, v[100];
	
	srand(time(NULL));
	
	n = 1 + (rand() % 10);
	m = 1 + (rand() % 10);
	
	printf("Matriz[%d][%d]\n", n, m);
	
	geraMatriz(matriz,n,m);
	mostraMatriz(matriz,n,m);
	
	int cont = 0;
	
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (i == j) {
				v[i] = matriz[i][j];
				cont++;
			}
			
	printf("Diagonal principal:\n");
	for (i = 0; i < cont; i++)
		printf("%3d |", v[i]);

	return 0;	
}
