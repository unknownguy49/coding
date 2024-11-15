# include <stdio.h>
int main()
{
	int lim,a=0,b=1,c=0,n=3;
	
	printf("Enter limit: ");
	scanf("%d",&lim);
	
	if(lim>=1)
	printf("%d ",0);
	
	if(lim>=2)
	printf("%d ",1);
	
	while(n<=lim)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		n++;
	}
	
	return 0;
}