// write a program for addition of two matrices. the order of the matrix will be user defined.

# include <stdio.h>
int main()
{
	int m,n;
	printf("Enter dimensions of the matrix: ");
	scanf("%d %d",&m,&n);
	
	int a[m][n];
	int b[m][n];
	int sum[m][n];
	
	int i,j;
	
	printf("\nEnter value into the 1st matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter value at position [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter value into the 2nd matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter value at position [%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nAddition of the two matrices:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}