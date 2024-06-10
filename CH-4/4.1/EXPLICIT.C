#include<stdio.h>
#include<conio.h>

main()
{       int a=65;
	float pi=3.14;

	clrscr();

	printf("A:%d\n",a);
	printf("A:%f",(float)a);

	printf("\n\n");

	printf("A:%.2f\n",pi);
	printf("A:%d",(int)pi);

	getch();

}