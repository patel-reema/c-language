
#include<stdio.h>
#include<conio.h>

main()
{
	int a,n;
	int sum;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	for(a=1,sum=0;a<=n;a++)
	{
		sum+=a;

	}
	printf("Sum of all numbers: %d ",sum);

	getch();
}