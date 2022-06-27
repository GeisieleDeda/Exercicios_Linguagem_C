#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int num1, num2, num3, num4;
	float media;
	printf("\n Informe o numero1:");
	scanf("\n %d", &num1);
	printf("\n Informe o numero2:");
	scanf("\n %d", &num2);
	printf("\n Informe o numero3:");
	scanf("\n %d", &num3);
	printf("\n Informe o numero4:");
	scanf("\n %d", &num4);
	
	media = (num1+num2+num3+num4)/4;
	
	printf("\n A media dos numeros e: %.2f", media);
	
	return(0);
}
