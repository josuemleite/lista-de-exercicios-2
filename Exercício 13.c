#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, m;
	
	printf("Tamanho do vetor A: ");
	scanf("%d", &n);
	printf("Tamanho do vetor B: ");
	scanf("%d", &m);
	
	char a[n], b[m];
	int i;
	
	printf("Preencha o vetor A:\n");
	for (i = 0; i < n; i++) {
		setbuf(stdin,NULL);
		scanf("%c", &a[i]);
	}
		
	printf("Preencha o vetor B:\n");
	for (i = 0; i < m; i++) {
		setbuf(stdin,NULL);
		scanf("%c", &b[i]);
	}
	
	int menor;
	
	if (strlen(a) < strlen(b))
		menor = strlen(a);
	else
		menor = strlen(b);
	
	char elementosComuns[menor];	
	int j, k = 0;
	
	/* Insere elementos iguais em um vetor */
	for (i = 0; i < n; i ++) {
		for (j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				elementosComuns[k] = a[i];
				k++;
				break;
			}
		}
	}

	/* Remove elementos com valor duplicado do vetor */
	for (i = 0; i < menor; i++) {
	    for(j = i+1; j < menor; ) {
	        if(elementosComuns[j] == elementosComuns[i]) {
	            for(k = j; k < menor; k++)
	            	elementosComuns[k] = elementosComuns[k+1];
            	menor--;
	        } else {
	        	j++;
	        }
	    }
	}
	
	/* Exibe vetor não duplicado */
	printf("Os seguintes elementos são comuns aos dois vetores:\n");
	for (i = 0; i < menor; i++)
		printf("%c\n", elementosComuns[i]);
	
	return 0;
}
