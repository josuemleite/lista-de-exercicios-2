#include <stdio.h>
#include <stdlib.h>

void gera(int v[], int n){
	int i;
	srand(time(NULL));
	for (i = 0; i < n; i++)
		v[i] = rand() % 100;
}
//--------------------------
void leiaVetor(int v[], int n){
	int i;
	for (i = 0; i < n; i++)
	   scanf("%d", &v[i]);
}
//--------------------------
void printVet(int v[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%d |", v[i]);
	printf("\n");   
}
//-------------------------------------
