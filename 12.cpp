#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	printf("\n Informe o numero:");
	scanf("\n %d", &num);
	printf("\n a potencia de %d e %.2f", num, pow (num,2));
	printf("\n a potencia de %d e %.2f\n:", num, sqrt (num));
	return (0);
}
