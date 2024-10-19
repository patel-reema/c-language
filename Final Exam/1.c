#include<stdio.h>

main()
{
	int n,i=1,fact;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	do{
		fact=i*fact;
		i++;
	}while(i<=n);
	printf("The Factorial number :%d",fact);
}
