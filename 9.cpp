#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
	float num1, num2, total;
	
	printf("\n Informe o primeiro numero:");
	scanf("%f", &num1);
	printf("\n Informe o segundo numero:");
	scanf("%f", &num2);
	total=pow(num1, num2);
	printf("%.2f elevado a %.2f e: %2.f\n", num1, num2, total);
	return (0);
}
