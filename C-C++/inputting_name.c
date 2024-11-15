
#include <stdio.h> 
int main()
{
	char name[100]; 
	printf("Enter name:"); 
	scanf("%s", name);
	printf("The name is %c \n", name[0]);
}

/*

#include <stdio.h> 
int main()
{
	char name[50]; 
	printf("Enter name:"); 
	scanf("%s", &name);
	printf("The name is %s \n", name);
	return 0;
}



#include <stdio.h> 
int main()
{
	char name[50];
	printf("Enter name:"); 
	//fgets(name, sizeof(name), stdin);
	gets(name); 
	puts(name); 
	return 0;
} */