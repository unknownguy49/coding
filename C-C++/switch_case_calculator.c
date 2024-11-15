# include <stdio.h>
int main()
{
	printf("1. Addition, 2. Subtraction, 3. Multiplication, 4. Division, 5. Exit");
	printf("\nEnter your choice");
	int ch;
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter 2 numbers: ");
			int a,b;
			scanf("%d",&a);
			scanf("%d",&b);
			int sum=a+b;
			
			printf("Sum: %d",sum);
			break;
			
		case 2:
			printf("Enter 2 numbers: ");
			int c,d;
			scanf("%d",&c);
			scanf("%d",&d);
			int diff=c-d;
			
			printf("Difference: %d",diff);
			break;
			
		case 3:
			printf("Enter 2 numbers: ");
			int e,f;
			scanf("%d",&e);
			scanf("%d",&f);
			int pr=e*f;
			
			printf("Product: %d",pr);
			break;
			
		case 4:
			printf("Enter 2 numbers: ");
			int g,h;
			scanf("%d",&g);
			scanf("%d",&h);
			int div=g/h;
			
			printf("Quotient: %d",div);
			break;
			
		default:
			printf("Exited...");
	}
	
	return 0;
}