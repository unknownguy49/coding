# include <stdio.h>
int main()
{
	int a[100];
	int sz;
	
	printf("Enter size of array: ");
	scanf("%d",&sz);
	
	int i,j;
	for(i=0;i<sz;i++)
	{
		printf("Enter element %d in the array: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Original array: \n");
	for(i=0;i<sz;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	printf("Sorted array: \n");
	for(i=0;i<sz;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}