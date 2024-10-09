#include<stdio.h>

void div(int a);

void main()
{
	int a;
	
	printf("Enetr any number: ");
	scanf("%d",&a);
	
	div(a);
}

void div(int a)
{
	if(a%3==0&&a%5==0)
	{
		printf("%d is divisible by both 3 and 5.",a);
	}
	else
	{
		printf("%d is not divisible by both 3 and 5.",a);
	}
}

