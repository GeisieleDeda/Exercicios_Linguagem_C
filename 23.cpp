#include <stdio.h>
#include <locale.h>
int main()
{
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o número:\n");
	scanf("%d", &num);
	if (num>0)
	{
		printf("O número é Positivo.\n");
	}
	else
	{
		if (num<0)
		{
			printf("O número é Negativo.\n");
		}
		else
		{
			printf("O número é zero.\n");
		}
	}
	return (0);
}
