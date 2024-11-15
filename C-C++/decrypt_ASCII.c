# include <string.h>
# include <stdio.h>
int main()
{
	int a[100];
	char c[100];
	int i=0;
	while(1)
	{
		printf("Enter ASCII code or 0 to stop: ");
		scanf("%d",&a[i]);
		
		if(a[i]!=0)
		{
			c[i]=(char)a[i];
			i++;
		}
		else
		break;
	}
	
	int j;
	for(j=0;j<strlen(c);j++)
	{
		printf("%c ",c[j]);
	}
}