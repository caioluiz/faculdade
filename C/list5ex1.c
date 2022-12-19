#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

void convMaiuscula(char *text){
	int i;
	int tamanho = strlen(text);
	for(i = 0; i < tamanho; i++){
		text[i] = text[i] - 32;
	}
	printf("%s", text);
}

char concat(char *text, char *text2){
	char concatText;
	scanf("%s", &text);
	scanf("%s", &text2);
	
	concatText = *text + *text2;
	printf("%s", concatText);
}

int captalize(char *text){
	int i;
	int tamanho = strlen(text);
	int count = 0;
	
	for(i = 0; i < tamanho; i++){
		if(i == 0){
			text[i] = text[i] - 32;
		}
		if(text[i] == ' '){
			text[i+1] = text[i+1] - 32;
			count++;
		}
	}
	tamanho -= count;
	return tamanho;
}

int comp(char *text, char *text2){
	int comp = strcmp(text, text2);
    return comp;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	char text[50];
	
	convMaiuscula(&text); 
	
	system("pause");
	return 0;

}
