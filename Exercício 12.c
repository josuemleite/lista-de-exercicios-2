#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("Número de lançamentos: ");
	scanf("%d", &n);
	
	int facesDado[n], i;
	int ocorrencias[6] = {0, 0, 0, 0, 0, 0};
	
	for (i = 0; i < n; i++) {
		printf("Lançamento %d: ", i+1);
		scanf("%d", &facesDado[i]);
		switch (facesDado[i]) {
			case 1:
				ocorrencias[0]++;
				break;
			case 2:
				ocorrencias[1]++;
				break;
			case 3:
				ocorrencias[2]++;
				break;
			case 4:
				ocorrencias[3]++;
				break;
			case 5:
				ocorrencias[4]++;
				break;
			case 6:
				ocorrencias[5]++;
				break;
		}
	}
	
	for (i = 0; i < 6; i++) {
		printf("O número de ocorrências da face [%d] é: %d\n", i+1, ocorrencias[i]);
	}
	
	return 0;
}
