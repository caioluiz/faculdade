#include<stdio.h>

int main(int argc, char *argv[]){
	int numero1, numero2;
	float media;
	
	printf("Insira dois valores: \n");
	puts("Primeiro Valor: ");
	scanf("%i", &numero1);
	puts("Segundo Valor: ");
	scanf("%i", &numero2);
	
	media = (numero1 + numero2)/2;
	
	printf("%.f", media);
}
