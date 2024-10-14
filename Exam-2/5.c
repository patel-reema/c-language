#include<stdio.h>

cube(int a)
{
	printf("Enter the number: ");
	scanf("%d",&a);
	return a*a*a;
}
int main()
{
	int a, ans;
	
	ans=cube(a);
	printf("%d",ans);
	
	return 0;
}
