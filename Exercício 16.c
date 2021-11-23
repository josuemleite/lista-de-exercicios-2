#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	char vetor[1000];
	
	fgets(vetor,1000,stdin);
	
	int i, tamanho;
	
	tamanho = strlen(vetor);
	
	for (i = 0; i < tamanho; i++) {
		if (vetor[i] == 'p') {
			printf("%c", vetor[i+1]);
			i++;
		}
		if (vetor[i] == ' ') {
			printf("%c", vetor[i]);
		}
	}
	
	return 0;
}
