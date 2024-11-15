# include <stdio.h>
int main()
{
	char c[100];
	
	int len=0;
	
	printf("Enter a string: ");
	scanf("%s",c);
	
	int i;
	for(i=0;i<100;i++)
	{	
		if(c[i]!='\0')
		{
			len++;
		}
		
		else
		break;
	}
	
	printf("Length of the string: %d",len);
}
