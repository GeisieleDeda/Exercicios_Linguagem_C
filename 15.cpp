#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int num;
	float raiz;
	printf(" Informe o numero:");
	scanf("%d", &num);
	if (num%2==0)
	{
		raiz = sqrt(num);
		printf("\nA raiz quadrada e: %.3f", raiz);
	}
	return (0);
}



