#include <stdio.h>

int main(void) {
	
	int matriz[20][20], i, j;
	
	for (i = 0; i < 20; i++)
		for (j = 0; j < 20; j++)
			matriz[i][j] = 0;
	
	int n;
	
	scanf("%d", &n);
	
	int a, b, c = 0;
	
	for (i = 0; i < n * 2;) {
		scanf("%d%d", &a, &b);
		if (matriz[a][b] == 1)
			c++;
		matriz[a][b] = 1;
		i += 2;
	}

	if (c > 0)
		printf("1\n");
	else
		printf("0\n");
	
	return 0;
}
