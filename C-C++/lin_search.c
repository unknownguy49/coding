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
	
	for(i=0;i<s;i++)
	{
		if(a[i]==ele)
		{
			printf("Element %d is found in position %d",ele,i+1);
			f=1;
		}
	}
	if(f==0)
	printf("Element %d not found",ele);
	
	return 0;
}