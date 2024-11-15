# include <stdio.h>
int main()
{
	int arr[100][100];
	int sz;
	int i,j;
	int s=0;
	
	printf("Enter dimension of the matrix: ");
	scanf("%d",&sz);
	
	printf("Enter elements in the matrix: \n");
	for(i=0;i<sz;i++)
	{
		for(j=0;j<sz;j++)
		{
			printf("At pos [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			
			if(i>j)
			{
				int temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
			}
			
			else
			continue;
		}
	}
	
	printf("Transposed: \n");
	for(i=0;i<sz;i++)
	{
		for(j=0;j<sz;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}