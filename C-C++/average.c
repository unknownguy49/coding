# include <stdio.h>
int main()
{
	printf("Enter three numbers: ");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	float avg=(a+b+c)/3.0;
	printf("Average: %f",avg);
	
	return 0;
}