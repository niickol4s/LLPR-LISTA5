#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int lin = 2;
	int col = 2;
	int mtz[lin][col];
	int mtz_cft[lin][col];
	int aux;
	
	srand(time(NULL));
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++) mtz[i][j] = rand() % 100;
	}
	
	printf("\nMatriz original:\n"); 
	
	for(int i = 0; i < lin; i++) {
	    for(int j = 0; j < col; j++) printf("%d\t", mtz[i][j]);
		printf("\n");
	}
	
  	for(int i = 0; i < lin; i++) {
	    for(int j = 0; j < col; j++) mtz_cft[i][j] = mtz[i][j];	
	}
	
	for(int i = 0; i < lin; i++) {
	    for (int j = 0; j < col; j++) {
		  	if(j==(col - 1)- i) mtz_cft[i][j] = -mtz_cft[i][j];
	    }
	}
	
	aux = mtz_cft[0][0];
	mtz_cft[0][0] = mtz_cft[1][1];
	mtz_cft[1][1] = aux;
	
	aux = mtz_cft[0][1];
	mtz_cft[0][1] = mtz_cft[1][0];
	mtz_cft[1][0] = aux;

	printf("\nMatriz cofatora:\n");
	
	for(int i = 0; i < lin; i++) {
	    for(int j = 0; j < col; j++) printf("%d\t", mtz_cft[i][j]);
		printf("\n");
	}
	
	return 0;
}
