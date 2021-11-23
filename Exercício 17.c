#include <stdio.h>

int main(void) {
	
	float n[5];
	
	scanf("%f%f%f%f%f", &n[0], &n[1], &n[2], &n[3], &n[4]);
	
	float aux;
	int i, j;
	
	for (i = 0; i < 5; i++){
   		for (j = i+1; j < 5; j++){
       		if (n[i] > n[j]){
         	    aux = n[i];
      			n[i] = n[j];
           		n[j] = aux;
            }
        }
    }
	
	float soma = 0;
	
	for (i = 1; i < 4; i++) {
		soma += n[i];
	}
	
	printf("%.1f\n", soma);
	
	return 0;
}
