#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, resultado;
	int op;
	printf("\ndigite o primeiro n�mero:");
	scanf("%f", &num1);
	printf("\ndigite o segundo n�mero:");
	scanf("%f", &num2);
	printf("\nEscolha a opera��o:\n1 - soma \n 2 - subtra��o \n 3 - multiplica��o \n 4 - Divis�o\n");
	scanf("%d", &op);
	switch (op)
	{
		case 1:
			resultado = num1 + num2;
			printf("A soma �: %.3f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtra��o �: %.3f\n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("A multiplica��o �: %.3f\n", resultado);
			break;
		case 4:
			resultado = num1 / num2;
			printf("A divis�o �: %.3f\n", resultado);
			break;
		default:
			printf("opcao inv�lida.\n");
			break;
	}
	return (0);
}
