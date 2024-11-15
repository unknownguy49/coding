# include <stdio.h>
int main()
{
	int a[100];
	int i;
	int m;
	
	printf("Enter number of rows: ");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	{
		printf("Enter element in the array index %d\n ",i);
		scanf("%d",&a[i]);
	}
	
	int s;
	printf("Enter element to find number of occurences: ");
	scanf("%d",&s);
	
	int c=0;
	for(i=0;i<m;i++)
	{
		if(a[i]==s)
		c++;
		
	}
	printf("Number of occurences of %d is %d",s,c);
	return 0;
}