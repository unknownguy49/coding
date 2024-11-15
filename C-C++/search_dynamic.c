# include <stdio.h>
# include <stdlib.h>1
int main()
{
	int search(int *p,int ele,int s);
	
	int sz;
	printf("Enter size of array: ");
	scanf("%d",&sz);
	
	int *arr=(int *)calloc(sz,sizeof(int));
	
	if(arr==NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	
	int i;
	for(i=0;i<sz;i++)
	{
		arr[i]=i+1;
	}
	
	int ele;
	printf("Enter element to find: ");
	scanf("%d",&ele);
	
	int f=search(arr,ele,sz);
	if(f==1)
	printf("Found");
	else
	printf("Not found");
}

int search(int *a,int e,int s)
{
	if(s==0)
	return 0;
	else
	{
		if(a[s-1]==e)
		return 1;
		else
		return search(a,e,s-1);
	}
}