#include<stdio.h>
#include<conio.h>

main()

{
	int salary;
	const int HRA=10;
	const int DA=5;
	const int TA=8;
	int gross_salary;
	clrscr();
	printf("Base salary :");
	scanf("%d",&salary);
	gross_salary=salary+(salary*HRA/100)+(salary*DA/100)+(salary*TA/100);
	printf("gross_salary : %d",gross_salary);


	getch();

}