#include <stdio.h>

int main()
{
	int a, b, c;
	int largest;
	
	printf("Enter any three numbers : ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>=b && a>=c)
	{
		largest = a;
	}
	
	else if (b>=c && b>=a)
	{
		largest = b;
	}
	
	else 
	{
		largest = c;
	}
	
	printf("The largest number is %d\n", largest);
	
	if (largest%2==0)
	{
		printf("The largest number is even.");
	}
	
	else
	{
		printf("The largest number is odd.");
	}
}
