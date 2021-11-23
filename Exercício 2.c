#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("Tamanho do vetor: ");
	scanf("%d", &n);
	
	while (!(n > 0)) {
		printf("Tamanho inválido: ");
		scanf("%d", &n);
	}
	
	float A[n];
	int i;
	
	for (i = 0; i < n; i++)
		scanf("%f", &A[i]);
	
	float maior = A[0], menor = A[0];
	
	for (i = 0; i < n; i++) {
		printf("%f\n", A[i]);
		if (A[i] > maior)
			maior = A[i];
		if (A[i] < menor)
			menor = A[i];
	}
	
	printf("Maior: %f\n", maior);
	printf("Menor: %f\n", menor);
	
	return 0;
}
