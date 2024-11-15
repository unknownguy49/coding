# include <stdio.h>
int main()
{
	int i,s;
	int f=0;
	printf("Enter size of the array: ");
	scanf("%d",&s);
	int a[s];
	
	printf("Enter elements in the array: \n");

	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int ele;
	printf("Enter element to be searched: ");
	scanf("%d",&ele);
	
	int low=0;
	int high=sizeof(a)-1;
	
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(a[mid]==ele)
		{
			printf("Element %d found",ele);
			f=1;
			break;
		}
		
		if(a[mid]<ele)
		low=mid+1;
		
		else
		high=mid-1;
		
	}
	
	if(f==0)
	printf("Element %d not found",ele);
	
	return 0;
}