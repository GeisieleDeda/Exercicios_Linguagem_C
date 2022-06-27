#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, resultado;
	int op;
	printf("\ndigite o primeiro número:");
	scanf("%f", &num1);
	printf("\ndigite o segundo número:");
	scanf("%f", &num2);
	printf("\nEscolha a operação:\n1 - soma \n 2 - subtração \n 3 - multiplicação \n 4 - Divisão\n");
	scanf("%d", &op);
	switch (op)
	{
		case 1:
			resultado = num1 + num2;
			printf("A soma é: %.3f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtração é: %.3f\n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("A multiplicação é: %.3f\n", resultado);
			break;
		case 4:
			resultado = num1 / num2;
			printf("A divisão é: %.3f\n", resultado);
			break;
		default:
			printf("opcao inválida.\n");
			break;
	}
	return (0);
}
