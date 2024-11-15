# include <stdio.h>
int main()
{
	int a[100];
	int i;
	int n;
	
	printf("Enter size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element at %d: ",i);
		scanf("%d",&a[i]);
	}
	
	int max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("Maximum: %d",max);
	
	return 0;
}