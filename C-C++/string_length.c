# include <stdio.h>
int main()
{
	int length(char *name);
	char name[100];
	
	printf("Enter string: \n");
//	fgets(name,sizeof(name),stdin);
	scanf("%s",name);
	
	printf("Length: %d",length(name));
	
	int i;
}

int length(char *name)
{
	int length=0;
	while(*(name+length)!='\0')
	{
		length++;
	}
	return length;
}