#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Informe o n�mero:\n");
	scanf("%d", &num);
	if (num%5 == 0)
	{
		printf("O n�mero %d � divis�vel por 5\n", num);
	}
	else
	{
		printf("O numero %d n�o � divis�vel por 5\n", num);
	}
	
	return (0);
}
