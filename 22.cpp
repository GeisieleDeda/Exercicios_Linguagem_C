#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
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
	printf("1 - cha 2 - suco 3 - refri\n");
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
	printf("o total de caloria e: %.2f \n", total);
	return (0);
}
