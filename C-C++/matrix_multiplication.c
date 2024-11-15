// write a program that will multiply two matrix of order 3

# include <stdio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	
	int i,j,k;
	
	printf("Enter values in the first matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	
	
	printf("Enter values in the second matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];	
			}
		}
	}
	
	printf("Product matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}