#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int op;
	float total;
	
	total=0;
	printf("1 - italiano 2 - japones 3 - salvadorenho\n");
	printf("informe o prato: \n");
	scanf("%d", &op);
	switch (op)
	{
		case 1: total = total +750;
		break;
		case 2: total = total +324;
		break;
		case 3: total = total +545;
		break;
	}
	printf("1 - chá 2 - suco 3 - refrigerante\n");
	printf("informe a bebida: \n");
	scanf("%d", &op);
	switch (op)
	{
		case 1: total = total +30;
		break;
		case 2: total = total +80;
		break;
		case 3: total = total +90;
		break;
	}
	printf("O total de caloria é: %.2f \n", total);
	return (0);
}
