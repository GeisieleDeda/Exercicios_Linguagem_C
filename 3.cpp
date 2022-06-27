#include <stdlib.h>
#include <stdio.h>
int main()
{	int idade, ano;
	float altura;
	char nome [30];
	printf ("Digite o seu nome:");
	scanf ("%s", nome);
	printf ("Digite a idade:");
	scanf ("%d", &idade);
	printf ("Digite a altura:");
	scanf ("%f", &altura);
	ano = 2012 - idade;
	printf ("\nO nome e: %s", nome);
	printf ("\nA altura e: %.2f", altura);
	printf ("\nA idade e: %d", idade);
	printf ("\nO ano de nascimento e: %d", ano);
	return (0);
}
