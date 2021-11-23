#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int N, X;
	
	printf("Tamanho do vetor: ");
	scanf("%d", &N);
	
	printf("Valor de X: ");
	scanf("%d", &X);
	
	int i, A[N], B[N];
	
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	
	for (i = 0; i < N; i++) {
		B[i] = A[i] * X;
		printf(" %d |", B[i]);	
	}
	
	return 0;
}
