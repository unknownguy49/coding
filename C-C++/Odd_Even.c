# include <stdio.h>
int main()
{
	int n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(n%2==0)
	printf("%d is an Even number",n);
	else
	printf("%d is an Odd number",n);
	
	return 0;
}