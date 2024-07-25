#include<stdio.h>
#include<conio.h>

main()
{
	int n, add;
	int sum;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);
	add=n%10;

	while(n>=10)
	{
		n=n/10;
	}
	sum=add+n;
	printf("%d",sum);

	getch();
}
