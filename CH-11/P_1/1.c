#include<stdio.h>

void cube(int a);

void main()
{
	int a;
	printf("Enter any number : ");
	scanf("%d",&a);
	
	cube(a);
}

void cube(int a)
{
	printf("%d",a*a*a);
}
