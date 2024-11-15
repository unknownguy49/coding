# include <stdio.h>
int main()
{
	int a=100;
	int *ptr=&a;
	
	a++;
	
	printf("%d",*ptr);
	
	return 0;
}