#include <stdio.h>

main()
{
	int row, col;
	
	printf("Enter the row elements: ");
	scanf("%d",&row);
	
	printf("Enter the col elements: ");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter the elements: ",a[i][j]);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}


	int lar=0;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(lar<a[i][j])
			{
				lar=a[i][j];
			}         
		}
	}
	
	 printf("the large number : %d",lar);
	
}
