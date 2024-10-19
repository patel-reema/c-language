#include<stdio.h>

main()
{
	int n,n1,n2;
	
	printf("Enter first number: ");
	scanf("%d",&n);
	printf("Enter second number: ");
	scanf("%d",&n1);
	printf("Enter third number: ");
	scanf("%d",&n2);
	
	if(n<n1)
	{
		printf("%d is greater number: ",n1);
		if(n1<n2)
		{
			printf("%d is greater number: ",n2);
			
		}
	}
	else{
		printf("%d is greater number: ",n1);
	}
	
}
