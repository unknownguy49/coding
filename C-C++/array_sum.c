# include <stdio.h>
int main()
{
	int a[]={15,1,5,3,4,9};
	int s=0;
	int i;
	int *ptr=a;
	
	for(i=0;i<6;i++)
	{
		printf("%d ",*(ptr+i));
		s=s+*(ptr+i);
	}
	printf("Sum: %d",s);
	
	return 0;
}