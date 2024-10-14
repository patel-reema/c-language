#include<stdio.h>

main()
{
	int n, rv;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rv=n%10;
		printf("%d",rv);
		n=n/10;
	}
}

