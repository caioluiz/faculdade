#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

#define tam 6

int main(){
	setlocale(LC_ALL, "Portuguese");
	int array[tam];
	int i, num, contador;
	
	num = 0;
	contador = 1;
	
	for(i=0; i<tam; i++){
		printf("Valor do elemento: ");
		scanf("%d", &array[i]);
		if(array[i] > num) {
			num = array[i];
			contador = 1;
		} else if(array[i] == num){
			contador++;
		}
	}
	printf("Maior Valor: %i.\n", num);
	printf("Apareceu: %i vezes.\n", contador);
    system("pause");
    return 0;
}
