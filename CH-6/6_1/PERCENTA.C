#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	float ans;
	int total_marks=300;
	int total;


	clrscr();

	printf("Enter the science marks: ");
	scanf("%d",&a);
	printf("Enter the maths marks: ");
	scanf("%d",&b);
	printf("Enter the english marks: ");
	scanf("%d",&c);
	total=a+b+c;
	ans = total*100/300;
	printf("%.2f",ans);




	getch();


}