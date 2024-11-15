# include <stdio.h>
# include <string.h>

int main()
{
	char c[100];
	char d[100];
	
	char concat[100];
	
	printf("Enter 1st string: ");
	scanf("%s",c);
	printf("Enter 2nd string: ");
	scanf("%s",d);
	
	int ccounter=0;
	int dcounter=0;
	
	for(int i=ccounter;i<strlen(c);i++)
	{
		concat[i]=c[i];
		ccounter++;
	}
	
	for(int j=dcounter;j<strlen(d);j++)
	{
		concat[ccounter]=d[j];
		ccounter++;
		dcounter++;
	}
	
	printf("Concatenated string: %s",concat);
}