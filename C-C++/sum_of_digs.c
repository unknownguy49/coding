# include <stdio.h>
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	int sum(int n);
	
	printf("Sum of digits: %d",sum(n));
}

int sum(int n)
{
	int r=0,s=0;
	if(n==0)
	return 0;
	else
	{
		r=n%10;
		s=r+sum(n/10);
		return s;
	}
}