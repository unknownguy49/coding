# include <stdio.h>
# include <math.h>

int main()
{
	void root(int pq);
	
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	root(n);
	
	return 0;
}

void root(int n)
{
	int j;
	j=sqrt(n);
	
	printf("Root is : %d",j);
}