# include <stdio.h>
int main()
{
	int n,r=0,d=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int m=n;
	
	while(n!=0)
	{
		r=n%10;
		d=d*10+r;
		n/=10;
	}
	
	if(d==m)
		printf("%d is a Palindrome number",m);
	else
		printf("%d is not a palindrome number",m);
	
	return 0;
}