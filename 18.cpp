#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Informe o número:\n");
	scanf("%d", &num);
	if (num%5 == 0)
	{
		printf("O número %d é divisível por 5\n", num);
	}
	else
	{
		printf("O numero %d não é divisível por 5\n", num);
	}
	
	return (0);
}
