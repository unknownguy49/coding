# include <stdio.h>
int main()
{
	void modify(int **p);
	
	int num=45;
	int *a=&num;
	printf("%d\n",num);
	modify(&a);
	printf("%d\n",num);
}

void modify(int **p)
{
	**p=50;
}