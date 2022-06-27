#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	char nome [30];
	int idade;
		
	printf("Informe seu nome:\n");
	scanf("%s", &nome);
	printf("Informe sua idade:\n");
	scanf("%d", &idade);
	
	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	if (idade<=18){
		printf("o valor do plano e: R$50,00\n");
	}
		else
		{
			if((idade>=30)&&(idade<=45))
			{
				printf("o valor do plano e: R$90,00\n");
			}
			else
			{
				if((idade>=46)&&(idade<=65))
				{
					printf("o valor do plano e: R$130,00\n");
				}
				else
				{
					printf("o valor do plano e: R$170,00\n");
				}
			}
		}
	return(0);
}
