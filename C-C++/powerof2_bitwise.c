# include <stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("%s",(n&(n-1))==0?"Even":"Odd");
	
	return 0;
}