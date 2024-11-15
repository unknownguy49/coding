# include <stdio.h>
# include <string.h>
int main()
{
	void rev(char s[],char r[],int p);
	
	char st[50];
	printf("Enter a string: ");
	scanf("%s",st);
	
	char r[50];
	rev(st,r,0);
	
	printf("Reverse: %s",r);
}

void rev(char s[],char r[],int p)
{
	int l=strlen(s);
	
	if(p<l)
	{
		r[l-p-1]=s[p];
		rev(s,r,p+1);
	}
}