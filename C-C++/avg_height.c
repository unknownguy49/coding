# include <stdio.h>
int main()
{
	int i;
	float h,s=0.0;
	int n;
	
	printf("Enter number of students in class: ");
	scanf("%d",&n);
	
	printf("Enter the heights of students in feet\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%f",&h);
		s=s+h;
	}
	
	float avg=s/n;
	
	printf("Average height: %f", avg);
	
	return 0;
}