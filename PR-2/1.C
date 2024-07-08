#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();

	printf("Enter your Marks: ");
	scanf("%d",&n);

	(n>=81 && n<=100)
	  ? printf("A")
	  : (n>=61 && n<=80)
		? printf("B")
		: (n>=51 && n<=60)
			? printf("C")
			:(n>=41 && n<=50)
				? printf("D")
				:(n>=33 && n<=40)
					? printf("E")
					: printf("F ,Better Luck Next Time!!!");
	getch();


}









