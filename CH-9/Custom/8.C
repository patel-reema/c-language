#include<stdio.h>
#include<conio.h>

main()
{
	int i, j, s;
	clrscr();

	for(i=1; i<=7; i++)
	{
		for(j=1; j<=4; j++)
		{
			if(j==1||i==1||i==7)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	 }

	getch();

}
