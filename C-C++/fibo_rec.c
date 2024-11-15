# include <stdio.h>
int main()
{
	int fibo(int n);
	int n;
	
	printf("Enter limit: ");
	scanf("%d",&n);
	int i;
	
	for(i=1;i<=n;i++)
	printf("%d ",fibo(i));
}

int fibo(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}