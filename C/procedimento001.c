#include <stdio.h>

void imprime(int v[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%i ", v[i]);
	}
}

void imprimeMatriz(int m[][4], int k){
	int i,j;
	for(i=0;i<k;i++){
		for(j=0;j<4;j++){
			printf("%i ", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int vet[5] = {1, 2, 3, 4, 5};
	int vetor[3][4] = {{1,2,3,4},
					   {5,6,7,8},
					   {9,10,11,12}};
	
	puts("\nProcedimento Modulo: \n");
	imprime(vet, 5);
	
	puts("\nProcedimento Matriz: \n");
	imprimeMatriz(vetor, 3);
}
