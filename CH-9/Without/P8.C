#include<stdio.h>
#include<conio.h>

main()
{
	int i, j;
	clrscr();

	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			if(j%2==0)
			{
				printf("0"); //printf("%d",j%2);
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}

	getch();
}