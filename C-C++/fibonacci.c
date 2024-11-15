# include <stdio.h>
int main()
{
	int limit;
	int a=0,b=1,c,n=3;
	
	printf("Enter limit: ");
	scanf("%d",&limit);
	
	if(limit>=1)
	printf("%d\n",0);
	
	if(limit>=2)
	printf("%d\n",1);
	
	if(limit>=3)
	{
		while(n<=limit)
		{
			c=a+b;
			printf("%d\n",c);
			a=b;
			b=c;
			n++;
		}
	}
	
	return 0;
}