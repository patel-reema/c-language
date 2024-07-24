#include<stdio.h>
#include<conio.h>

main()
{
	int m, n;
	clrscr();

	printf("Enter first year: ");
	scanf("%d",&n);

	printf("Enetr second year: ");
	scanf("%d",&m);

	while(m>=n)
	{
		if(m%4==0)
		{
			printf("%d\t",m);
		}m--;
	}

	getch();
}


























