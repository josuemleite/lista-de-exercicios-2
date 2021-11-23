#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("N: ");
	scanf("%d", &n);
	
	float matrizA[n][n], matrizB[n][n];
	int i, j;
	
	printf("Preencha a matriz A:\n");
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%f", &matrizA[i][j]);
			
	printf("Matriz A:\n");	
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%5.2f |", matrizA[i][j]);
		printf("\n");
	}
	
	printf("Preencha a matriz B:\n");
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%f", &matrizB[i][j]);
			
	printf("Matriz B:\n");	
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%5.2f |", matrizB[i][j]);
		printf("\n");
	}
	
	system("PAUSE");
	system("cls");
	
	int resposta;
	
	while (resposta != 5) {
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("                        MENU                          \n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("1 - Somar as duas matrizes\n");
		printf("2 - Subtrair a primeira matriz da segunda\n");
		printf("3 - Adicionar uma constante às duas matrizes\n");
		printf("4 - Imprimir as matrizes\n");
		printf("5 - Sair\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		scanf("%d", &resposta);
		if (resposta == 1) {
			float matrizSoma[n][n];
	
			for (i = 0; i < n; i++)
				for (j = 0; j < n; j++)
					matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
					
			printf("Matriz soma:\n");
			
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++)
					printf("%5.2f |", matrizSoma[i][j]);
				printf("\n");
			}
			
			printf("\n");
			system("PAUSE");
			system("cls");
		}
		else if (resposta == 2) {
			float matrizDiferenca[n][n];
	
			for (i = 0; i < n; i++)
				for (j = 0; j < n; j++)
					matrizDiferenca[i][j] = matrizA[i][j] - matrizB[i][j];
					
			printf("Matriz diferença:\n");
			
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++)
					printf("%5.2f |", matrizDiferenca[i][j]);
				printf("\n");
			}
			
			printf("\n");
			system("PAUSE");
			system("cls");
		}
		else if (resposta == 3) {
			float constante;
			int l, c;
			
			printf("Constante: ");
			scanf("%f", &constante);
			
			printf("Linha e coluna: ");
			scanf("%d%d", &l, &c);
			
			while ((l < 0 || l > n) || (c < 0 || c > n)) {
				printf("A linha e coluna deve ser um valor de 0 a %d!\n", n-1);
				printf("Linha e coluna: ");
				scanf("%d%d", &l, &c);
			}
			
			matrizA[l][c] = constante;
			matrizB[l][c] = constante;
			
			printf("\n");
			system("PAUSE");
			system("cls");
		}
		else if (resposta == 4) {
			printf("Matriz A:\n");	
	
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++)
					printf("%5.2f |", matrizA[i][j]);
				printf("\n");
			}
			
			printf("Matriz B:\n");
			
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++)
					printf("%5.2f |", matrizB[i][j]);
				printf("\n");
			}
			
			printf("\n");
			system("PAUSE");
			system("cls");
		}
	}
	
	return 0;
}
