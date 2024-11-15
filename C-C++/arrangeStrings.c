# include <string.h>
# include <stdio.h>
int main()
{
	char a[100][100];
	int n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter element at %d:",i);
		scanf("%s",a[i]);
	}
	
	int j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			char temp[100];
			if(strcasecmp(a[i],a[j])>0)
			{	
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%s ",a[i]);
	}
	
	return 0;
}