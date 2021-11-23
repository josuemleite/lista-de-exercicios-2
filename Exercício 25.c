#include <stdio.h>
#include <locale.h>
#include "bibliotecaMatriz.h"

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[100][100], n, m, i, j, par = 0, impar = 0;
	
	printf("N�mero de linhas e colunas: ");
	scanf("%d%d", &n, &m);
	
	leiaMatriz(matriz,n,m);
	
	printf("Matriz[%d][%d]\n", n, m);
	
	mostraMatriz(matriz,n,m);
	
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (matriz[i][j] % 2 == 0)
				par++;
			else
				impar++;
	
	printf("H� %d n�meros pares e %d n�meros �mpares na matriz!\n", par, impar);
	
	return 0;
}
	
