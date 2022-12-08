#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

#define tam 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[20], i;
	int j = 0;

	int vet1[tam] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int vet2[tam] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	
	for(i=0; i<20; i+=2){
			vet[i] = vet1[j];
			vet[i + 1] = vet2[j];
			j++;
	}
	
	for(i=0; i<20; i++){
		printf("%i\n", vet[i]);
	}
	
    system("pause");
    return 0;
}
