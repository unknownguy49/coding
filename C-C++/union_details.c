# include <stdio.h>
int main()
{
	union DOB
	{
		int date;
		int month;
		int year;
	};
	
	union info
	{
		char name[100];
		union DOB date;
		int age;
	};
	
	union info i1;
	
	printf("Enter name: ");
	fgets(i1.name,sizeof(i1.name),stdin);
	
	printf("Enter date: ");
	scanf("%d",&i1.date.date);
	
	printf("Enter month: ");
	scanf("%d",&i1.date.month);
	
	printf("Enter year: ");
	scanf("%d",&i1.date.year);
	
	printf("Enter age: ");
	scanf("%d",&i1.age);
	
	printf("----------------------------\nDETAILS\n----------------------------\n");
	printf("Name: %s\n",i1.name);
	printf("DOB: %d/%d/%d\n",i1.date.date,i1.date.month,i1.date.year);
	printf("Age: %d years",i1.age);
	
	return 0;
}