#include <stdio.h>
#include <locale.h>
//----------------------------------------------------------------------
void diaSobrecarregado (int m[6][7]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, soma = 0, v[7], sobrecarregado = 0, dia;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 6; j++) {
			soma += m[j][i];
		}
		v[i] = soma;
		if (v[i] > sobrecarregado) {
			sobrecarregado = v[i];
			dia = i;
		}
		soma = 0;
	}
	
	switch (dia) {
		case 0:
			printf("Segunda-feira é o dia mais sobrecarregado!\n");
			break;
		case 1:
			printf("Terça-feira é o dia mais sobrecarregado!\n");
			break;
		case 2:
			printf("Quarta-feira é o dia mais sobrecarregado!\n");
			break;
		case 3:
			printf("Quinta-feira é o dia mais sobrecarregado!\n");
			break;
		case 4:
			printf("Sexta-feira é o dia mais sobrecarregado!\n");
			break;
		case 5:
			printf("Sábado é o dia mais sobrecarregado!\n");
			break;
		case 6:
			printf("Domingo é o dia mais sobrecarregado!\n");
			break;
	}
}
//----------------------------------------------------------------------
void disciplinaMaisEstudada (int m[6][7]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, soma = 0, v[6], estudada = 0, disciplina;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 7; j++) {
			soma += m[i][j];
		}
		v[i] = soma;
		if (v[i] > estudada) {
			estudada = v[i];
			disciplina = i;
		}
		disciplina = 0;
	}
	
	switch (disciplina) {
		case 0:
			printf("D1 é a disciplina mais estudada!\n");
			break;
		case 1:
			printf("D2 é a disciplina mais estudada!\n");
			break;
		case 2:
			printf("D3 é a disciplina mais estudada!\n");
			break;
		case 3:
			printf("D4 é a disciplina mais estudada!\n");
			break;
		case 4:
			printf("D5 é a disciplina mais estudada!\n");
			break;
		case 5:
			printf("D6 é a disciplina mais estudada!\n");
			break;
	}
}
//----------------------------------------------------------------------
void mediaEstudoDia (int m[6][7]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, soma = 0, media;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 6; j++) {
			soma += m[j][i];
		}
	}
	
	media = soma / 7;
	
	printf("Média de horas estudadas por dia: %d\n", media);
}
//----------------------------------------------------------------------
void mediaEstudoFimSemana (int m[6][7]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, soma = 0, media;
	for (i = 5; i < 7; i++) {
		for (j = 0; j < 6; j++) {
			soma += m[j][i];
		}
	}
	
	media = soma / 2;
	
	printf("Média de horas estudadas no fim de semana: %d\n", media);
}
//----------------------------------------------------------------------
void mediaEstudoDisciplina (int m[6][7]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, soma = 0, v[6];
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 7; j++) {
			soma += m[i][j];
		}
		v[i] = soma;
		soma = 0;
	}
	
	for (i = 0; i < 6; i++) {
		printf("Horas semanais dedicadas à disciplina D%d: %d\n", i+1, v[i]);
	}
}
//----------------------------------------------------------------------
int main(void) {
	
	int matriz[6][7], i, j;
	
	printf("Preencha a matriz 6x7:\n");
	
	for (i = 0; i < 6; i++)
		for (j = 0; j < 7; j++)
			scanf("%d", &matriz[i][j]);
	
	printf("Disciplina x Dia da Semana:\n");
	
	printf("    Seg  Ter  Qua  Qui  Sex  Sab  Dom\n");
	for (i = 0; i < 6; i++) {
		printf("D%d ", i+1);
		for (j = 0; j < 7; j++)
			printf("%3d |", matriz[i][j]);
		printf("\n");
	}
	
	diaSobrecarregado(matriz);
	printf("----------------------------------------------------------------------\n");
	disciplinaMaisEstudada(matriz);
	printf("----------------------------------------------------------------------\n");
	mediaEstudoDia(matriz);
	printf("----------------------------------------------------------------------\n");
	mediaEstudoFimSemana(matriz);
	printf("----------------------------------------------------------------------\n");
	mediaEstudoDisciplina(matriz);
	
	return 0;
}
