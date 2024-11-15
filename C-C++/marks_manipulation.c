# include <string.h> 
# include <stdio.h>
int main()
{
	char name[10][100];
	int marks[10][5];
	int total[10];
	printf("Enter details:\n\n");
	printf("Enter names: \n");
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter name of student %d: ",i+1);
		fgets(name[i],sizeof(name[i]),stdin);
	}
	printf("\n");
	int j;
	for(i=0;i<10;i++)
	{
		printf("Enter marks of student %d: \n",i+1);
		int s=0;
		for(j=0;j<5;j++)
		{
			printf("	Enter marks of subject %d: ",j+1);
			scanf("%d",&marks[i][j]);
			s=s+marks[i][j];
		}
		total[i]=s;
	}
	for(i=0;i<10;i++)
	{
		printf("Name: %s",name[i]);
		printf("Total: %d\n",total[i]);
	}
	int sub_highest[5];
	char top_student[5][100];
	for(j=0;j<5;j++)
	{
		sub_highest[j]=marks[0][j];
		strcpy(top_student[j],name[0]);
		for(i=1;i<10;i++)
		{
			if(marks[i][j]>sub_highest[j])
			{
				sub_highest[j]=marks[i][j];
				strcpy(top_student[j],name[i]);
			}
		}
	}
	int k;
	for(k=0;k<5;k++)
	{
		printf("Subject %d highest: %d by %s\n",k+1,sub_highest[k],top_student[k]); 
	}
	int max=total[0];
	char best[100];
	strcpy(best,name[0]);
	for(i=1;i<10;i++)
	{
		if(total[i]>max)
		{
			max=total[i];
			strcpy(best,name[i]);
		}
	}
	printf("Student who obtained the highest total marks: %sMarks: %d",best,max);
	return 0;
}
