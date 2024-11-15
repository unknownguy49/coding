# include <string.h>
# include <stdio.h>
int main()
{
	int occurence();
	printf("First Occurence: %d",occurence());
	return 0;
}

int occurence()
{
	char a[100];
	char ch;
	
	printf("Enter a string: ");
	fgets(a,sizeof(a),stdin);
	
	printf("Enter character: ");
	scanf("%c",&ch);
	
	int i,ind=-1;
	for(i=0;i<strlen(a);i++)
	{
		char c=a[i];
		
		if(c==ch)
		{
			ind=i;
			break;
		}
	}
	
	return ind;
}