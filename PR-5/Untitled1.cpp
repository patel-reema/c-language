#include<stdio.h>

main()
{
	int row,col;
	
	printf("Enter row:");
	scanf("%d",&row);
	
	printf("Enter Column:");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\n Array Input\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Array Output\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
    }
    
    int r,rsum=0;
    
    printf("Enter r value:");
    scanf("%d",&r);
    
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==r)
			{
				printf("%d",a[i][j]);
				rsum += a[i][j];
			}
		}
		
    }
    
    printf("Sum=%d\n",rsum);
    
    int c,csum=0;
    
    printf("\n");
    
    printf("Enter c value:");
    scanf("%d",&c);
    
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(j==r)
			{
				printf("%d",a[i][j]);
				csum += a[i][j];
			}
		}
	
    }
    
    printf("Sum=%d",csum);
}
