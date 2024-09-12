#include<stdio.h>

main()
{
	int size;
	
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	for(i=0; i<size; i++)
	{
		printf("enter the elements : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for (i=0; i<size; i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
}

