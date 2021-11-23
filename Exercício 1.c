#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int N;
	
	printf("Tamanho do vetor (colunas): ");
	scanf("%d", &N);
	
	while (!(N > 0 && N <= 100)) {
		printf("Tamanho inválido (1 a 100): ");
		scanf("%d", &N);
	}
	
	int vetor[N], i, soma = 0;
	
	for (i = 0; i < N; i++) {
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];
	}
	
	printf("Soma: %d\n", soma);
	
	return 0;
}
