#include <stdio.h>
#include "bibliotecaMatriz.h"

int contNumMatriz(int m[100][100],int linhas, int cols, int n){
	int i, j, cont=0;
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
			if(m[i][j]==n)
			   cont++;
	return cont;		   
}
// fim da funcao
int main(){
	
	int matriz[100][100], n, m, num, r, i, j;
	
	srand(time(NULL));
	
	n = 1 + (rand() % 10);
	m = 1 + (rand() % 10);
	
	printf("Matriz[%d][%d]\n", n, m);
	
	geraMatriz(matriz,n,m);
	mostraMatriz(matriz,n,m);
	
	printf("Valor para verificar na matriz: ");
	scanf("%d",&num);
	
	// chamar a funcao que ira verificar o numero na matriz
	r = contNumMatriz(matriz,n,m,num);
	
	printf("O numero %d existe %d vez(es) na matriz!\n", num, r);

	return 0;
}
