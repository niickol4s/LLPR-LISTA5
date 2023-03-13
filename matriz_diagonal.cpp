#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int tam;
	
	printf("\nOrdem da matriz: ");
	scanf("%d", &tam);
	
	int mtz[tam][tam];
	
	srand(time(NULL));
	
	for(int i = 0; i < tam; i++) {
		for(int j = 0; j < tam; j++) mtz[i][j] = rand() % 100;
	}
	
	printf("\nMatriz:\n");
	
	for(int i = 0; i < tam; i++) {
		for(int j = 0; j < tam; j++) printf("%d \t", mtz[i][j]);
		printf("\n");
	}
	
	printf("\nDiagonal principal:\n");
	
	for(int i = 0; i < tam; i++) printf("\n%d", mtz[i][i]);
	
	printf("\nDiagonal secundária:\n");
	
	for(int i = 0; i < tam; i++) printf("\n%d", mtz[i][tam - 1 - i]);
	
	return 0;
}
