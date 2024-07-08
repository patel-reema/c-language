#include <stdio.h>
#include <conio.h>

main()
{

	int m;
	char Grade;

	clrscr();


	printf("Enter your Marks: ");
	scanf("%d",&m);

	if(m>=81 && m<=100)
	   {
		Grade= 'A';
	    }
	else if(m>=61 && m<=80)
		{
			Grade= 'B';
		}
	else if(m>=51 && m<=60)
		{
			Grade='C';
		}
	else if(m>=41 && m<=50)
		{
			Grade= 'D';
		}
	else if(m>=33 && m<=40)
		{
			Grade='E';
		}
	else
		{
			Grade= 'F';
			printf("Better Luck Next Time !!");
		}


	switch(Grade)
	{
		case 'A':
		case 'a':
			clrscr();
			printf("Your grade is A ,Exellent work!");
			break;
		case 'B':
		case 'b':
			clrscr();
			printf("Your grade is B ,Well Done");
			break;
		case 'C':
		case 'c':
			clrscr();
			printf("Your grade is C ,Good Job");
			break;
		case 'D':
		case 'd':
			clrscr();
			printf("Your grade is D ,Better Try");
			break;
		case 'E':
		case 'e':
			clrscr();
			printf("Your grade is E ,You passed");
			break;


	}

	getch();

}

























