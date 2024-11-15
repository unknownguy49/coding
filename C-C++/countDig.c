# include <stdio.h>
int main()
{
	int count(int n);
	
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int c=count(n);
	printf("Count digits: %d",c);
}

int count(int n)
{
	int r=0;
	static int c=0;
	
	if(n==0)
	return c;
	else
	{	
		r=n%10;
		c++;
		return count(n/10);
	}
}