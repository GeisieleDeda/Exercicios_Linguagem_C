#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int idade;
	printf("Informe a idade:\n");
	scanf("%d", &idade);
	if(idade<16)
	{
		printf("Nao eleitor\n");
	}
	else
	{
		if((idade<18)||(idade>65))
		{
			printf("eleitor facultativo\n");
		}
		else
		{
			printf("eleitor obrigatorio\n");
		}
	}
	return (0);
}
