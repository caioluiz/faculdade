#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int fatorial(int k){
	if(k > 0){
		return k * fatorial(k - 1);
	} else {
	    return 1;
	}
}

float expo(float k, float y){
	int valor;
	if(y == 0){
		valor = 1;
	} else{
		valor = k * expo(k, y - 1);
	}
	
	return valor;
}

int somaSucessiva(int k, int y){
	int som;
	if((k == 0) || (y == 0)){
		som = 0;
	} else {
		som = k + somaSucessiva(k, y - 1);
		
 	  }	
 	  return som;
}

int mod(int k, int y){
	int valor;
	if((k == 0) || (y == 1)){
		valor = 0;
	} else if(k < y){
		valor = k;
	} else {
		valor = mod(k-y, y);
	}
	return valor;
}

int fib(int k){
	int valor;
	if((k == 1) || (k == 2)){
		return 1;
	} else {
		valor = fib(k-1) + fib(k-2);
	}
	return valor;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroEntrada = fatorial(5);
	double expoen = expo(2,5);
	int somaSc = somaSucessiva(2, 5);
	int fibo = fib(10);

	printf("%i\n", numeroEntrada);
	printf("%.f\n", expoen);
	printf("%i\n", somaSc);
	printf("%i", fibo);


}

