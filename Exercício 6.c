#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	srand(time(NULL)); // inicializa gerador de números
	
	int N;
	
	N = 1 + (rand() % 10);
	
	int i, vetor[N];
	
	for (i = 0; i < N; i++)
		vetor[i] = rand() % 10;
		
	int num, nVetor = 0;	
	
	while(1) {
		scanf("%d", &num);
		
		for (i = 0; i < N; i++) {
			if (num == vetor[i]) {
				printf("O número %d está no vetor, na posição [%d]!\n", num, i);
				nVetor++;
			}
		}
			
		if (nVetor == 0)
			printf("O número %d não está no vetor!\n", num);
			
		nVetor = 0;
	}	
	
	return 0;
}
