# include <stdio.h>
int main()
{
	int n,r=0,c=0;
	
	int m=n;
	
	printf("Enter a integer: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		c++;
		n/=10;
	}
	
	printf("Number of digits is %d.",c);
	return 0;
	
}