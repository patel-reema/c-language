"?#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	int rev=0, rem;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);

	getch();
}





















