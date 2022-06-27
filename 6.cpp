#include <stdlib.h>
#include  <stdio.h>
int main()
{
	float n1, n2, n3, n4, media;
	printf("\n Digite a nota1:");
	scanf("%f", &n1);
	printf("\n Digite a nota2:");
	scanf("%f", &n2);
	printf("\n Digite a nota3:");
	scanf("%f", &n3);
	printf("\n Digite a nota4:");
	scanf("%f", &n4);
	media = (n1+n2+n3+n4)/4;
	printf("\n A media e: %.2f \n", media);
	return(0);
}
