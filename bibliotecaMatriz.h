#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leiaMatriz(int m[][100], int linhas, int cols){
	int i, j;
	for (i = 0; i < linhas; i++){
		for (j = 0; j < cols; j++){
			printf("M[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}// fim for j
	}// fim for i
}
//-------------------------
void geraMatriz(int m[][100], int linhas, int cols){
	int i, j;
	srand(time(NULL));
	for (i = 0; i < linhas; i++){
		for (j = 0; j < cols; j++){
			m[i][j] = rand() % 100;
		}// fim for j
	}// fim for i
}
//-------------------------
void mostraMatriz(int m[][100], int linhas, int cols){
	int i, j;
	for (i = 0; i < linhas; i++){
		for (j = 0; j < cols; j++){
			printf("%3d |", m[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
}
//-------------------------
