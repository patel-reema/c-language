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
			if((i==1)&&(j>1)||(i==6)&&(j==1||j==4)||(i==7)&&(j==2||j==3)||(j==4)&&(i<=6))
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
