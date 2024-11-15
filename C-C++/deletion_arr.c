// Write a C program to delete an element from the specified position of an array.
// Write a C program to reverse the array elements.

# include <stdio.h>
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int arr[n];
	int arr2[n-1];
	
	int i;
	printf("Enter elements in the array: \n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter element at %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int p;
	printf("Enter position to delete element from: ");
	scanf("%d",&p);
	
	printf("Array after deleting: \n");
	int c=0;
	for(i=0;i<n;i++)
	{
		if(i==p-1)
		continue;
		
		arr2[c]=arr[i];
		c++;
	}
	
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr2[i]);
	}
	
	return 0;
}