#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Informe a idade:\n");
	scanf("%d", &idade);
	if(idade<16)
	{
		printf("Não eleitor\n");
	}
	else
	{
		if((idade<18)||(idade>65))
		{
			printf("Eleitor facultativo\n");
		}
		else
		{
			printf("Eleitor obrigatório\n");
		}
	}
	return (0);
}
