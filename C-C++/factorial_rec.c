# include <stdio.h>
int main()
{
	int fact(int n);
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Factorial: %d",fact(n));
}

int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}