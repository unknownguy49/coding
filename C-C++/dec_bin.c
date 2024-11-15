# include <stdio.h>
int main()
{
	int count(int n);
	
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int c=count(n);
	printf("Binary: %d",c);
}

int count(int n)
{
	int r=0;
	static int d=0;
	
	if(n==0)
	return d;
	else
	{	
		r=n%2;
		d=d*10+r;
		return count(n/10);
	}
}