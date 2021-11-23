#include <stdio.h>

int main(void) {
	
	int n;
	
	printf("N: ");
	scanf("%d", &n);
	
	int matriz[n][n], i, j;
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			if (i == j)
				matriz[i][j] = 1;
			else
				matriz[i][j] = 0;
		}
		
	printf("Matriz identidade:\n");	
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%2d |", matriz[i][j]);
		printf("\n");
	}
	
	return 0;
}
