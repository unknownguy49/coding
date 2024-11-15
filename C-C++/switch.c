# include <stdio.h>
int main()
{
	int ch;
	printf("Enter a choice from 1 to 4");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("ONE\n");
			break;
		
		case 2:
			printf("TWO\n");
			break;
			
		case 3:
			printf("THREE\n");
			break;
			
		case 4:
			printf("FOUR\n");
			break;
			
		default:
			printf("ANY\n");
	}
	
	return 0;
}