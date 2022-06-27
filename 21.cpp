#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float altura, peso;
	char sexo;
	printf("Informe a sexo (M/F):\n");
	scanf("%c", &sexo);
	printf("Informe altura:\n");
	scanf("%f", &altura);
	
	if ((sexo=='F') || (sexo=='f'))
	{
		peso= (62.1*altura) - 44.7;
	}
	else
	{
		peso = (72.7*altura) - 58;
	}
	printf("O sexo é: %c\n", sexo);
	printf("A altura é: %.2f\n", altura);
	printf("O peso ideal é: %.2f\n", peso);
	return(0);
}
