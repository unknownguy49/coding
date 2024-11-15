# include <stdio.h>
int main()
{
	int i;
	int arr[]={1,2,3,4,5};
	int *ar=arr;
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ar+i));
	}
	
	return 0;
}