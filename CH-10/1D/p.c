#include<stdio.h>

main()
{
	int size, i;
	
	printf("Enter the Array size: ");
	scanf("%d",&size);
	
	int a[size];
	
	for(i=0; i<size; i++)
	{
		printf("Enter the element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0; i<size; i++)
	{
		printf("%d\t",a[i]);                                                      
	}
	
	
}
