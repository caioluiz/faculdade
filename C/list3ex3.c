#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int functionDiv(int m){
	int divisors = 0;
	float countDivisors;
	
	while(m != 1){
		countDivisors = m / 2;
		m = countDivisors;
		
		divisors++;
	}
	return divisors;
}

int functionFat(int m){
	int fatorial;
	if(m == 0){
		return 1;
	} else{
		fatorial = m * functionFat(m - 1);
	}
	return fatorial;
}

int functionSum(int m){
	int sum, i, count;
	if(m>=1){
		sum = m + functionSum(m - 1);
	}
	return sum;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    int m, comparador;
    
    printf("Entre com um numero: \n");
	scanf("%i", &m);
	    
    while(m > 0){
	    if(m % 2 == 0){
	        comparador = 1;
	    }
	    if((m % 2 != 0) && (m < 10)){
	        comparador = 2;       
	    }
	    if((m % 2 != 0) && (m >= 10)){
	    	comparador = 3;
		}
	    
	    switch(comparador){
	    	case 1:{
	    		printf("O número %i possui %i divisores.\n", m, functionDiv(m));
				break;
			}
			case 2:{
				printf("O fatorial de %i é igual a %i.\n", m, functionFat(m));
				break;
			}
			case 3:{
				printf("O resultado da soma dos inteiros de %i é igual a %i\n", m, functionSum(m));
				break;
			}
			default: {
				printf("Unspected Error!\n");
				break;
			}
		}
	    printf("Entre com um numero: \n");
	    scanf("%i", &m);
    	
	}

    system("pause");
    return 0;
}


