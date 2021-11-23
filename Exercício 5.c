#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	char fita[50], complementar[50];
	int i, n;
	
	printf("Entre com a sequência de DNA: ");
	gets(fita);
	setbuf(stdin,NULL);
	
	n = strlen(fita); // quantidade de caracteres digitados
	
	for (i = 0; i < n; i++) {
		switch (fita[i]) {
			case 'A':
				complementar[i] = 'T';
				break;
			case 'T':
				complementar[i] = 'A';
				break;
			case 'C':
				complementar[i] = 'G';
				break;
			case 'G':
				complementar[i] = 'C';
				break;
		} // fim do switch
	} // fim do for
	
	printf("Fita principal:\n");
	for (i = 0; i < n; i++)
		printf(" %c |", fita[i]);
	printf("\nFita complementar:\n");
	for (i = 0; i < n; i++)
		printf(" %c |", complementar[i]);
	
	printf("\n");
	
	return 0;
}
