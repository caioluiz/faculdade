#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int matriz[3][5] = {{1,2,3,4,5}, 
						 {10,5,3,2,1}, 
						 {3,7,10,2,8}};
    int somaLinha[3];
    int i, j, somador;
    
    for(i=0; i<3; i++){
    	somador = 0;
    	for(j=0;j<5;j++){
    		somador += matriz[i][j];
		}
    	somaLinha[i] = somador;
    	printf("%i, ", somaLinha[i]);
	}
	
   system("pause");
   return 0;

}
