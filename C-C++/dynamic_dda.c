# include <stdio.h>
# include <stdlib.h>
int main()
{
	void transpose(int *a,int m,int n);
	
	int m,n;
	printf("Enter dimensions: \n");
	scanf("%d%d",&m,&n);
	
	int *p=(int *)calloc(m*n,sizeof(int));
	
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			p[i*n+j]=j+1;
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",p[i*n+j]);
		}
		printf("\n");
	}
	
	transpose(p,m,n);
	
	free(p);
}

void transpose(int *a,int m,int n)
{
	int *t=(int *)calloc(n*m,sizeof(int));
	int i,j;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t[j*m+i]=a[i*n+j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",t[i*m+j]);
		}
		printf("\n");
	}
}