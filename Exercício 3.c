#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int N;
	
	printf("Tamanho do vetor: ");
	scanf("%d", &N);
	
	while (!(N > 0)) {
		printf("Tamanho inválido: ");
		scanf("%d", &N);
	}
	
	int vetor[N], i, impares = 0;
	
	for (i = 0; i < N; i++) {
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < N; i++) {
		printf("%d\n", vetor[i]);
		if(vetor[i] % 2 == 1)
			impares++;
	}
	
	printf("Quantidade de ímpares: %d\n", impares);
	
	return 0;
}
