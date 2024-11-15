# include <stdio.h>
# include <string.h>
int main()
{
	char st[100];
	char rev[100];
	printf("Enter a string: ");
	scanf("%s",st);
	int i;
	int len=strlen(st);
	for(i=0;i<len;i++)
	{
		rev[i]=st[len-i-1];
	}
	rev[len]='\0';
	printf("The reversed string: %s",rev);
	return 0;
}