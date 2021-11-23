#include <stdio.h>
#include "bibliotecaMatriz.h"

int contNumMatriz(int m[100][100],int linhas, int cols, int n){
	int i, j, cont=0;
	for(i = 0; i < linhas; i++)
		for(j = 0; j < cols; j++)
			if(m[i][j] == n)
			   cont++;
	return cont;		   
}
// fim da funcao
int main(){
	
	int matriz[100][100], n, m, i, j, v[100];
	
	srand(time(NULL));
	
	n = 1 + (rand() % 10);
	m = 1 + (rand() % 10);
	
	printf("Matriz[%d][%d]\n", n, m);
	
	geraMatriz(matriz,n,m);
	mostraMatriz(matriz,n,m);
	
	for (i = 0; i < 100; i++)
		v[i] = 0;
	  
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		  	if (contNumMatriz(matriz,n,m,matriz[i][j]) > 1)
		  		if (v[matriz[i][j]] == 0){
		       		printf("Valor %d repetido!\n", matriz[i][j]);
			   		v[matriz[i][j]] = 1;
				}// fim if mostra

	return 0;
}
