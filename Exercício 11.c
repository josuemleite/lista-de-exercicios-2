#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	char cartaoGabarito[10];
	int k;
	
	printf("Gabarito:\n");
	for (k = 0; k < 10; k++) {
		scanf("%c", &cartaoGabarito[k]);
		setbuf(stdin,NULL);
	}
	
	int n;
	
	printf("Número de alunos: ");
	scanf("%d", &n);
	
	char respostasAlunos[n][10];
	int i, j;
	
	for (i = 0; i < n; i++) {
		printf("Cartão de respostas do aluno %d:\n", i+1);
		for (j = 0; j < 10; j++) {
			setbuf(stdin,NULL);
			scanf("%c", &respostasAlunos[i][j]);
		}
	}
	
	int cont = 0;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < 10; j++) {
			if (cartaoGabarito[j] == respostasAlunos[i][j]) {
				cont++;
			}
		}
		printf("O aluno %d obteve %d acertos!\n", i+1, cont);
		cont = 0;
	}
	
	return 0;
}
