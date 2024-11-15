# include <stdio.h>
int main()
{
	printf("Enter marks of student: ");
	int marks;
	
	scanf("%d",&marks);
	
	char grade=(marks>=90)?'A':(marks<90 && marks>=80)?'B':(marks<80 && marks>=70)?'C':(marks<70 && marks>=60)?'D':'F';
	printf("Grade: %c",grade);
	
	return 0;
}