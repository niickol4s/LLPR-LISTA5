#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define lin 2
#define col 2

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mtz[lin][col];
	int det;
	int dp = 1;
	int ds = 1;
	
	srand(time(NULL));
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) mtz[i][j] = rand() % 100;
	}
	
	printf("\nMatriz original:\n");
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) printf("%d \t", mtz[i][j]);
		printf("\n");
	}
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) {
			if(i == j) dp *= mtz[i][j];
			if(j == (col - 1) - i) ds *= mtz[i][j];
		}
	}
	
	det = dp - ds;
	
	printf("\nDeterminante: %d\n", det);
	return 0;
}
