#include<stdio.h>

main()
{
	int n, mul;
	
	printf("Enter number for multiply: ");
	scanf("%d",&n);
	
	for(mul=1; mul<=10; mul++)
	{
		printf("%d * %d = %d\n",n,mul,n*mul);
	}
}
