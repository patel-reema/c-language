#include<stdio.h>

	int add(int x, int y)
	{
		return x+y;
	}
	
	int sub(int x, int y)
	{
		return x-y;
	}
	
	int mul(int x, int y)
	{
		return x*y;
	}
	
	int div(float a, float b)
	{
		return a/b;
	}
	int mod(int x, int y)
	{
		return x%y;
	}
	
	int main()
	{
		int c;
		int x, y;
		float a,b;
		
		do
		{
			printf("Enter 1 for Addition\n");
			printf("Enter 2 for Substraction\n");
			printf("Enter 3 for Multiplication\n");
			printf("Enter 4 for Division\n");
			printf("Enter 5 for Modulous\n");
			printf("Enter 6 for Exit\n");	
			scanf("%d\n",&c);		

			switch(c)
			{
				case 1:
				printf("Enter first integer number :");
				scanf("%d",&x);
			    printf("Enter second integer number :");
				scanf("%d",&y);	
				printf("%d + %d = %d",x, y, add(x,y));
			break;
			case 2:
				printf("Enter first integer number :");
				scanf("%d",&x);
			    printf("Enter second integer number :");
				scanf("%d",&y);	
				printf("%d - %d = %d",x, y, sub(x,y));
			break;
			case 3:
				printf("Enter first integer number :");
				scanf("%d",&x);
			    printf("Enter second integer number :");
				scanf("%d",&y);	
				printf("%d * %d = %d",x, y, mul(x,y));
			break;
			case 4:
				printf("Enter first integer number :");
				scanf("%d",&a);
			    printf("Enter second integer number :");
				scanf("%d",&b);	
				printf("%d / %d = %d",x, y, div(a,b));
			break;
			case 5:
				printf("Enter first integer number :");
				scanf("%d",&x);
			    printf("Enter second integer number :");
				scanf("%d",&y);	
				printf("%d % %d = %d",x, y, mod(x,y));
			break;
			default:
				printf("Exiting calculator.....");
				printf("\n");			
			}
		}while(c!=0); 
		printf("\n");	
	}
	
	

