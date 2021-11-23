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
	
	int vetor[N], i, pares = 0, somaPares = 0;
	
	for (i = 0; i < N; i++) {
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < N; i++) {
		printf("%d\n", vetor[i]);
		if(vetor[i] % 2 == 0) {
			pares++;
			somaPares = somaPares + vetor[i];
		}
	}
	
	float media;
	
	media = (float) somaPares / pares;
	
	printf("Média dos valores pares: %f\n", media);
	
	return 0;
}
