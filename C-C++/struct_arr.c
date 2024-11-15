# include <stdio.h>
int main()
{
	struct DOB
	{
		int date;
		int month;
		int year;
	};
	
	struct info
	{
		char name[100];
		struct DOB date;
		int age;
	};
	
	struct info i1[100];
	int n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	getchar();
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter name: ");
		fgets(i1[i].name,sizeof(i1[i].name),stdin);
		
		printf("Enter date: ");
		scanf("%d",&i1[i].date.date);
		
		printf("Enter month: ");
		scanf("%d",&i1[i].date.month);
		
		printf("Enter year: ");
		scanf("%d",&i1[i].date.year);
		
		printf("Enter age: ");
		scanf("%d",&i1[i].age);
		getchar();
	}
	
	for(i=0;i<n;i++)
	{
		printf("----------------------------\nDETAILS\n----------------------------\n");
		printf("Name: %s",i1[i].name);
		printf("DOB: %d/%d/%d\n",i1[i].date.date,i1[i].date.month,i1[i].date.year);
		printf("Age: %d years\n",i1[i].age);
	}
	
	return 0;
}