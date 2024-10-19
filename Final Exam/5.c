#include<stdio.h>

main()
{
	int size;
	
	printf("Enter the size of an array: ");
	scanf("%d",&size);
	
	int a[size],i;
	 for(i=0; i<=size; i++)
	 {
	 	printf("\n\n");
	 	printf("Enter the Array elements: ");
	 	scanf("%d",&a[i]);
	 }
	
	for(i=0; i<=size; i++)
	{
		printf("%d\t",a[i]);
	} 
	printf("\n\n");
	
	int n=a[0];
	for(i=0; i<=size; i++)
	 {
	 	if(a[i]>n)
	 	{
	 		n=a[i];
		}
	 }
	 printf("The largest number:%d ",n);
	
	 
	 
}
