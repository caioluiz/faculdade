#include <stdio.h>

int main(){
	int v[3], more;
	
	v[0] = 10; // Valor armazenado na posição 1 do vetor
	v[1] = 9;  // posição 2
	v[2] = 1;  // posição 3
	
	more = v[0] + v[1] + v[2]; // soma dos valores armazenados no vetor
	
	printf("%i", more);
	
}
