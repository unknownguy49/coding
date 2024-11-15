# include <stdio.h>
int main()
{
	int search();
	
	printf("Position: %d",search());
	return 0;
}

int search()
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
	
	int ele;
	printf("Enter element to find: ");
	scanf("%d",&ele);
	
	int ind=-1;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			ind=i;
			break;
		}
	}
	
	return ind;
}