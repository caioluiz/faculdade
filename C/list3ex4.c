#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

void xless10(int x){
	float count;
	count = sqrt(x-10) / 2;
	printf("%.f\n", count);
}

void xpowmore1(int x){
	float count;
	count = sqrt(pow(x,2)+1)/2;
	printf("%.f\n", count);
}	

void xpowth(int x){
	float count;
	count = pow(x,3)/pow(x,2)-16;
	printf("%.f\n", count);
}

float func(int x){		
	if(x >= 10){
		xless10(x);
	} 
	if(x <= 4){
		xpowmore1(x);
	}
	if((x > 4) && (x < 10)){
		xpowth(x);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    int x;
    
    printf("Entre com um numero: \n");
	scanf("%i", &x);
	    
    while(x >= 0){
	    
		func(x);
	    
	    printf("Entre com um numero: \n");
	    scanf("%i", &x);
    	
	}
    system("pause");
    return 0;
}
