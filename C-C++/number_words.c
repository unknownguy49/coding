# include <string.h>
# include <stdio.h>
int main()
{
	char a[100];
	printf("Enter a string: ");
	fgets(a,sizeof(a),stdin);
	int len=strlen(a);
	
	int i,s=0;
	for(i=0;i<len;i++)
	{
		char c=a[i];
		if(c==' '&&c!='\0')
		{
			s++;
		}
	}
	
	printf("Number of words: %d", s+1);
	
	return 0;
}