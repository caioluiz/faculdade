#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Portuguese");
	
	int salario;
	float percSalario;
	float novoSalario;
	
	printf("Informe seu sal�rio atual: ");
	scanf("%i", &salario);
	printf("Informe o percentual de aumento: ");
	scanf("%f", &percSalario);
	puts("Sal�rio com Aumento: ");
	
	novoSalario = (salario * percSalario)/100 + salario;
	printf("%.2f", novoSalario);
}
