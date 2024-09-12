#include<stdio.h>

main()
{
	int row,col;
	
	printf("Enter row:");
	scanf("%d",&row);
	
	printf("Enter column:");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\n Array Input\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nArray Output\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
}

	
