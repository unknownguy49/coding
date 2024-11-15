# include <stdio.h>
int main()
{
	int power(int p,int q);
	
	int a,b;
	printf("Enter base and index: ");
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("Power: %d",power(a,b));
}

int power(int a,int b)
{
	if(b==0)
	return 1;
	else
	return a*power(a,b-1);
}