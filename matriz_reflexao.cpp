#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define lin 2
#define col 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mtz[lin][col];
	int mtz_rfx[lin][col];
	
	srand(time(NULL));
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) mtz[i][j] = rand() % 100;
	}
	
	printf("\nMatriz original:\n");
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) printf("%d \t", mtz[i][j]);
		printf("\n");
	}
	
	printf("\nReflexão matriz em relação ao eixo Y:\n");
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) {
			if(j == 0) mtz_rfx[i][j] = -mtz[i][j];
	        	else mtz_rfx[i][j] = mtz[i][j];
		}
	}
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) printf("%d \t", mtz_rfx[i][j]);
		printf("\n");
	}
	return 0;
}
