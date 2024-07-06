#include <stdio.h>
#include <conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	printf("Enter any number: ");
	scanf("%d",&c);

	(a>b)
	 ?printf("%d is minimum.",b)
	 :printf("%d is minimum.",a);



	getch();


}