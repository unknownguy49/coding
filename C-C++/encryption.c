#include<stdio.h>
#include<string.h>

int main()
{
	char st[100];
	char enc[100];
	
	int k;
	printf("Enter string to encrypt: ");
	gets(st);
	printf("Enter key: ");
	scanf("%d",&k);
	
	int n=strlen(st);
	
	for(int i=0;i<n;i++)
	{
		if(st[i]<='z'&&st[i]>='a')
		{
			int cn=(int)st[i];
			int en=(int)st[i]+k;
			if(en>122)
			en=en-26;
			char ch=(char)en;
			enc[i]=ch;
		}
		else if(st[i]>='A'&&st[i]<='Z')
		{
			int cn=(int)st[i];
			int en=(int)st[i]+k;
			if(en>90)
			en=en-26;
			char ch=(char)en;
			enc[i]=ch;
		}
		else
		enc[i]=st[i];
	}
	
	printf("Encrypted text: %s",enc);
	
	return 0;
}