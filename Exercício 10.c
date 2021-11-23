#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int N, dado;
	
	printf("Tamanho do vetor: ");
	scanf("%d", &N);
	
	printf("Valor: ");
	scanf("%d", &dado);
	
	int vetor[N], i, cont = 0;
	
	for (i = 0; i < N; i++) {
		scanf("%d", &vetor[i]);
		if (vetor[i] == dado)
			cont++;
	}
	
	printf("O número %d aparece %d vezes no vetor!\n", dado, cont);
	printf("Vetor: |");
	for (i = 0; i < N; i++)
		printf(" %d |", vetor[i]);
	
	printf("\n");
	
	return 0;
}
