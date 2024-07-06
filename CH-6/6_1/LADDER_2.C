#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&a);

	if(a==0)
	{
		clrscr();
		printf("%d is neutral!");
	}
	else
	{
		if(a/2>0)
		{
		clrscr();
		printf("%d is positive!");
		}

		else
		{
		clrscr();
		printf("%d is negative!");
	       }
	 }
	getch();





}



