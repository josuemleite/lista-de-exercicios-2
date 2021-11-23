#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int N;
	
	printf("Tamanho vetor: ");
	scanf("%d", &N);
	
	int i, vetor1[N], vetor2[N], vetorMultiplicacao[N];
	
	printf("Preencha o vetor 1:\n");
	for (i = 0; i < N; i++)
		scanf("%d", &vetor1[i]);
		
	printf("Preencha o vetor 2:\n");
	for (i = 0; i < N; i++)
		scanf("%d", &vetor2[i]);
		
	for (i = 0; i < N; i++)
		vetorMultiplicacao[i] = vetor1[i] * vetor2[i];
		
	printf("Vetor multiplicação:\n");
	for (i = 0; i < N; i++)
		printf(" %d |", vetorMultiplicacao[i]);
		
	printf("\n");
	
	return 0;
}
