# include <stdio.h>
int main()
{
	int a,b;
	
	void swap(int *a,int *b);
	
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	swap(&a,&b);
	
	printf("1st: %d\n2nd: %d",a,b);
	return 0;
}

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}