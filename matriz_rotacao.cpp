#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define lin 2
#define col 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mtz[lin][col];
	int ib = 0;
	int jb = 0;
	int mtz_rot[lin][col];
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) mtz[i][j] = rand() % 100;
	}
	
	printf("\nMatriz original:\n");
	
	for(int i = 0; i < lin; i++) {
		for(int j = 0; j < col; j++) printf("%d \t", mtz[i][j]);
		printf("\n");
	}
	
	printf("\nMatriz em 90 graus:\n");
	
	for(int j = 0; j < col; j++) {
		jb = 0;
		for(int i = (lin - 1); i >= 0; i--) {
			mtz_rot[ib][jb] = mtz[i][j];
			printf("%d \t", mtz[i][j]);
			jb++;
		}
		printf("\n");
		ib++;
	}
	return 0;
}
