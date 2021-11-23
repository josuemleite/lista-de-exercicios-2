#include <stdio.h>

int main(void) {
	
	int matriz[20][20], i, j;
	
	// Deixa a matriz nula
	for (i = 0; i < 20; i++)
		for (j = 0; j < 20; j++)
			matriz[i][j] = 0;
	
	// Armazena o número de redes
	int n;
	
	scanf("%d", &n);
	
	// Modifica a matriz para que da coordenada xi até xf e yi até yf apresente o valor 1 (possui rede)
	// É necessário fazer n * 4 no primeiro for pois haverá 4 coordenadas para cada rede (n)
	// Soma-se 4 ao valor de i no final do segundo for pois já foram armazenados 4 valores das coordenadas
	int xi, xf, yi, yf, k, l;
	
	for (i = 0; i < n * 4;) {
		scanf("%d%d%d%d", &xi, &xf, &yi, &yf);
		for (k = xi; k <= xf; k++)
			for (l = yi; l <= yf; l++)
				matriz[k][l] = 1;
		i += 4;
	}

	// Exibe a matriz preenchida de 0s e 1s
//	for (i = 0; i < 20; i++) {
//		for (j = 0; j < 20; j++)
//			printf("%d |", matriz[i][j]);
//		printf("\n");
//	}
	
	// Conta quantos 1s a matriz possui e exibe o valor
	int cont = 0;
	
	for (i = 0; i < 20; i++)
		for (j = 0; j < 20; j++)
			if (matriz[i][j] == 1)
				cont++;
				
	printf("%d\n", cont);
	
	return 0;
}
