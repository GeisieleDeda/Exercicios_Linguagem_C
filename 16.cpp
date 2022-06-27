#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int quadrado, num;
	float raiz;
	printf(" Digite o numero:");
	scanf("%d", &num);
	if (num % 2 == 0){
		raiz = sqrt (num);
		printf("\nO numero e par.");
		printf("\nA raiz quadrada e: %.3f", raiz);
	}
	else{
		quadrado = num *num;
		printf("\nO numero e impar.");
		printf("\nO numero quadrado e: %d", quadrado);
	}
	return (0);
}
	
	
