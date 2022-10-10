#include <stdio.h>

int main(){
	int mat[3][3];
	int i,j;
	
	mat[0][0] = 1;
	mat[0][1] = 2;
	mat[0][2] = 3;
	
	mat[1][0] = 4;
	mat[1][1] = 5;
	mat[1][2] = 6;
	
	mat[2][0] = 7;
	mat[2][1] = 8;
	mat[2][2] = 9;

	printf("Imprimindo linha a linha: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Valor armazenado na linha %i e coluna %i: %i\n", i+1, j+1, mat[i][j]);
		}
	}
}
