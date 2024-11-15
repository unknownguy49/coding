# include <string.h>
# include <stdio.h>
int main()
{
	printf("Enter a password: ");
	char pass[100];
	scanf("%s",pass);
	
	if(strlen(pass)<8)
	{
		printf("not strong");
	}
	else
	{
		int i,c1=0,c2=0,c3=0;
		for(i=0;i<strlen(pass);i++)
		{
			char c=pass[i];
			
			if(c>='a'&&c<='z') c1++;
			if(c>='A'&&c<='Z') c2++;
			if(c>='0'&&c<='9') c3++;
		}
		
		if(c1>0&&c2>0&&c3>0)
		printf("Strong");
		else
		printf("Not strong");
	}
	
	
	return 0;
}