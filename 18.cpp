#include <stdlib.h>
#include<stdio.h>
#include <math.h>
int main()
{
	int num;
	printf("Informe o numero:\n");
	scanf("%d", &num);
	if (num%5 == 0)
	{
		printf("O numero %d e divisivel por 5\n", num);
	}
	else
	{
		printf("O numero %d nao e divisivel por 5\n", num);
	}
	
	return (0);
}
