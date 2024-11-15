# include <stdio.h>
int main()
{
	int m,n;
	printf("Enter number of rows and columns: \n");
	scanf("%d",&m);
	scanf("%d",&n);
	
	int a[m][n];
	int i,j;
	
	printf("Enter values into the matrix: \n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}