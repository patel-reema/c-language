#include<stdio.h>
#include<conio.h>

main()
{
	int i, j, s;
	clrscr();

	for(i=1; i<=6; i++)
	{
		for(j=1; j<=5; j++)
		{
			if((j==1||j==5)&&(i<=4)||(i==5)&&(j==2||j==4)||(i==6)&&(j==3))
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
