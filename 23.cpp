#include <stdio.h>
#include <locale.h>
int main()
{
	int num;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o n�mero:\n");
	scanf("%d", &num);
	if (num>0)
	{
		printf("O n�mero � Positivo.\n");
	}
	else
	{
		if (num<0)
		{
			printf("O n�mero � Negativo.\n");
		}
		else
		{
			printf("O n�mero � zero.\n");
		}
	}
	return (0);
}
