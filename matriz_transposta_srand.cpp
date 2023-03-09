#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int tam_lin;
	int tam_col;
	
	printf("\nQuestão 1 - Dada a matriz original, mostre a transposta.\n");
	
	printf("\nQuantidade de linhas da matriz: ");
	scanf("%d", &tam_lin);
	
	printf("\nQuantidade de colunas da matriz: ");
	scanf("%d", &tam_col);
	
	int matriz[tam_lin][tam_col];
	
	srand(time(NULL));
	
	for(int i = 0; i < tam_lin; i++) {
		for(int j = 0; j < tam_col; j++) matriz[i][j] = rand() % 100;
	}
	
	printf("\nMatriz original:\n");
	
	for(int i = 0; i < tam_lin; i++) {
		for(int j = 0; j < tam_col; j++) printf("%d \t", matriz[i][j]);
		printf("\n");
	} 
	
	printf("\nMatriz transposta:\n");
	
	int matriz_transp[tam_col][tam_lin];
	
	for(int i = 0; i < tam_col; i++) {
		for(int j = 0; j < tam_lin; j++) matriz_transp[i][j] = matriz[j][i];
	}
	
	for(int i = 0; i < tam_col; i++) {
		for(int j = 0; j < tam_lin; j++) printf("%d \t", matriz_transp[i][j]);
		printf("\n");
	}
	
	return 0;
}
