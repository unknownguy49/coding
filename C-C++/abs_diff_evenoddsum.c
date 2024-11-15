# include <stdio.h>
int main()
{
	int n,i,so=0,se=0;
	int limit;
	
	printf("Enter the limit: ");
	scanf("%d",&limit);
	
	for(i=1;i<limit;i++)
	{
		if(i%2==0)
		se=se+i;
		else
		so=so+i;
	}
	
	int ad=se-so;
	if(ad<0)
	ad=so-se;
	
	printf("The sum of even numbers: %d\n",se);
	printf("The sum of odd numbers: %d\n",so);
	printf("Absolute difference: %d\n",ad);
	
	return 0;
}