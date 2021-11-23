#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	srand(time(NULL)); // inicializa gerador de n�meros
	
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
				printf("O n�mero %d est� no vetor, na posi��o [%d]!\n", num, i);
				nVetor++;
			}
		}
			
		if (nVetor == 0)
			printf("O n�mero %d n�o est� no vetor!\n", num);
			
		nVetor = 0;
	}	
	
	return 0;
}
