# include <stdio.h>
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int arr[n];
	int rev[n];
	
	int i;
	printf("Enter elements in the array: \n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter element at %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		rev[i]=arr[n-1-i];
	}
	
	printf("Array elements: ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("Reversed elements: ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",rev[i]);
	}
	printf("\n");
	
	return 0;
}