#include<stdio.h>
#include<conio.h>

main()
{
	int i, j, s;
	clrscr();

	for(i=1; i<=7; i++)
	{
		for(j=1; j<=6; j++)
		{
			if((i==1||i==7)&&(j>=2&&j<=5)||(i==2||i==3)&&(j==1)||(i==5||i==6)&&(j==6)||(i==4)&&(j>=2&&j<=4))
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
