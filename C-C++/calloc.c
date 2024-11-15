# include <stdio.h>
# include <stdlib.h>
int main()
{
	int *arr;
	int i;
	
	arr=(int*)calloc(5,sizeof(int));
	
	if(arr==NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	
	for(i=0;i<5;i++)
	{
		//arr[i]=i+1;
		printf("%d ",arr[i]);
	}
	
	free(arr);
	
	return 0;
}