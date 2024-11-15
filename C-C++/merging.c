# include <stdio.h>
int main()
{
	int a[100];
	int b[100];
	int c[200];
	
	int m=5;
	int n=3;
	
	int i,j,k;
	
	for(i=0;i<m;i++)
	{
		printf("Enter element for 1st array: ");
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<n;j++)
	{
		printf("Enter element for 2nd array: ");
		scanf("%d",&b[j]);
	}
	
	for(k=0;k<m;k++)
	{
		c[k]=a[k];
	}
	
	k=m;
	while(k<m+n)
	{
		int i=0;
		while(i<n)
		{
			c[k]=b[i];
			i++;
			k++;
		}
	}
	
	int p,q;
	for(p=0;p<m+n-1;p++)
	{
		for(q=p+1;q<m+n;q++)
		{
			if(c[p]>c[q])
			{
				int temp=c[p];
				c[p]=c[q];
				c[q]=temp;
			}
		}
	}
	
	for(k=0;k<m+n;k++)
	{
		printf("%d ",c[k]);
	}
	
	return 0;
}