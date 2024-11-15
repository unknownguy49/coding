# include <string.h>
# include <stdio.h>
int main()
{
	char a[100];
	char b[100];
	
	printf("Enter a string: ");
	fgets(a,sizeof(a),stdin);
	
	int i;
	for(i=0;i<strlen(a);i++)
	{
		b[i]=a[strlen(a)-i-1];
	}
	b[strlen(a)]='\0';
	printf("The reverse: %s",b);
	
	return 0;
}