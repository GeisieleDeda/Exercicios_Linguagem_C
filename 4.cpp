#include <stdlib.h>
#include <stdio.h>
int main()
{
	int num, ant, suc;
	printf("Digite o numero:");
	scanf("%d", &num);
	ant=num -1;
	suc=num +1;
	
	printf("\n O Antecessor e: %d", ant);
	printf("\n O Sucessor e: %d", suc);
	
	return (0);
}
