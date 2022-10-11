#include <stdio.h>
#include <locale.h>

float maior(float num1, float num2){
	if(num1 > num2){
		return num1;
	} else return num2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x, y , m;
	
	printf("Digite um número: ");
	scanf("%f", &x);
	fflush(stdin);
	printf("Digite mais um valor: ");
	scanf("%f", &y);
	fflush(stdin);
	
	m = maior(x,y);
	printf("Maior: %.2f", m);
}
