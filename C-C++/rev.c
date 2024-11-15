# include <stdio.h>
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	int rev(int n);
	
	printf("Sum of digits: %d",rev(n));
}

int rev(int n)
{
	int r=0;
	if(n==0)
	return r;
	
	r=r*10+n%10;
	return rev(n/10);
}