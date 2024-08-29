#include<stdio.h>
#include<conio.h>

main()
{
	int i, j, s;
	clrscr();

	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if((j==1)&&(i>=2&&i<=6)||(i==1)&&(j>=2&&j<=4)||
			(i==7)&&(j==2||j==3)||(i==5)&&(j==3)||(j==5)&&(i>=2&&i<=5)||(j==4)&&(i==6)||(j==5)&&(i==7))
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
