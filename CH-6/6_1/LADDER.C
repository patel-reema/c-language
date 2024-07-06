#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	float total,pr;
	clrscr();

	printf("Enter the science marks: ");
	scanf("%d",&a);
	printf("Enter the maths marks: ");
	scanf("%d",&b);
	printf("Enter the hindi marks: ");
	scanf("%d",&c);
	printf("Enter the s.s marks: ");
	scanf("%d",&d);
	printf("Enter the english marks: ");
	scanf("%d",&e);
	total=a+b+c+d+e;
	printf("total=%2.f",total);
	pr=(total*100)/500;

	if(pr>=91 && pr<=100)
	{
		clrscr();
		printf("Grade = A+");
	}
	else if(pr>=81 && pr <=90)
	{
		clrscr();
		printf("Grade = A");
	}
	else if(pr>=71 && pr <=80)
	{
		clrscr();
		printf("Grade = B+");
	}
	else if(pr>=61 && pr<=70)
	{
		clrscr();
		printf("Grade = B");
	}
	else if(pr>=51 && pr<=60)
	{
		clrscr();
		printf("Grade = C+");
	}
	else if(pr>=41 && pr<=50)
	{
		clrscr();
		printf("Grade = C");
	}
	else if(pr>=33 && pr<=40)
	{
		clrscr();
		printf("Grade = D");
	}
	else
	{
		clrscr();
		printf("you are fail!!");
	}



	getch();




}