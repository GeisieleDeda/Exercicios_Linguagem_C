#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quadrado, num;
	float raiz;
	printf(" Digite o n�mero:");
	scanf("%d", &num);
	if (num % 2 == 0){
		raiz = sqrt (num);
		printf("\nO n�mero � par.");
		printf("\nA raiz quadrada �: %.3f", raiz);
	}
	else{
		quadrado = num *num;
		printf("\nO n�mero � impar.");
		printf("\nO n�mero quadrado �: %d", quadrado);
	}
	return (0);
}
	
	
