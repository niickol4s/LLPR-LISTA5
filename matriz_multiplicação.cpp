#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mtz1[2][2];
	int mtz2[2][2];
	int mtz3[2][2] = {0, 0, 0, 0};
	
	printf("\nQuestão 2 - Calcular multiplicação entre as duas matrizes.\n");
	
	srand(time(NULL));
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) mtz1[i][j] = rand() % 100;
	}
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) mtz2[i][j] = rand() % 100;
	}
	
	printf("\nPrimeira matriz:\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) printf("%1d \t", mtz1[i][j]);
		printf("\n");
	}
	
	printf("\nSegunda matriz:\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) printf("%1d \t", mtz2[i][j]);
		printf("\n");
	}
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			for(int k = 0; k < 2; k++) mtz3[i][j] = mtz3[i][j] + mtz1[i][k] * mtz2[k][j];
		}
	}
	
	printf("\nMultiplicação das duas matrizes:\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) printf("%1d \t", mtz3[i][j]);
		printf("\n");
	}
	
	return 0;
}
