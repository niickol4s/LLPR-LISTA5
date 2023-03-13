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
	
	printf("\nMatriz identidade:\n");
	printf("\nValores da diagonal principal são iguais a 1, os demais, 0.\n");
	
	for(int i = 0; i < tam; i++) printf("\n[%d][%d] = %d\n", i, i, 1);
	
	return 0;
}
