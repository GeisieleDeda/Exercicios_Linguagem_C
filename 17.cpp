#include <stdlib.h>
#include<stdio.h>
#include <math.h>
int main()
{
	float num1, num2, resultado;
	int op;
	printf("digite o primeiro numero:");
	scanf("%f", &num1);
	printf("\ndigite o segundo numero:");
	scanf("%f", &num2);
	printf("Escolha a operacao:\n1 - soma \n 2 - subtracao \n 3 - Multiplicacao \n 4 - Divisao");
	scanf("%d", &op);
	switch (op)
	{
		case 1:
			resultado = num1 + num2;
			printf("A soma e: %.3f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtracao e: %.3f\n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("A multiplicacao e: %.3f\n", resultado);
			break;
		case 4:
			resultado = num1 / num2;
			printf("A divisao e: %.3f\n", resultado);
			break;
		default:
			printf("opcao invalida.\n");
			break;
	}
	return (0);
}
