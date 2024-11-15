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
			
			if(i==j)
			s=s+arr[i][j];
		}
	}
	
	printf("Trace of the matrix: %d",s);
	return 0;
}