#include <stdio.h>

int main()
{
	int CP, SP, P, L;
	printf("Enter the CP : ");
	scanf("%d", &CP);
	printf("Enter the SP : ");
	scanf("%d", &SP);
	
	if (SP>=CP)
	{
		printf("Profit is %d");
	}
	
	else 
	{
		printf("Loss is %d");
	}
}
