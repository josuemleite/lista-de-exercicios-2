#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	char vetor[100];
	
	printf("Conteúdo do vetor: ");
	gets(vetor);
	setbuf(stdin,NULL);
	
	int n, i, aux;
	
	n = strlen(vetor);
	
	for (i = n - 1; i >= 0; i--) {
		printf("%c", vetor[i]);
	}

	printf("\n");
	
	return 0;
}
