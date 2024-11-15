# include <stdio.h>
# include <stdlib.h>
int main()
{
	struct car
	{
		char name[100];
		char model[100];
		char transmission;
	};
	
	int n,i;
	printf("Enter number of cars: ");
	scanf("%d",&n);
	getchar();
	struct car *c1=(struct car *)malloc(n*sizeof(struct car));
	
	for(i=0;i<n;i++)
	{
		printf("Details of car %d: \n",i+1);
		printf("Enter car company: ");
		scanf("%s",c1[i].name);
		printf("Enter car model: ");
		scanf("%s",c1[i].model);
		printf("Enter transmission: ");
		scanf("%c\n",&c1[i].transmission);
		getchar();
	}
	
	for(i=0;i<n;i++)
	{
		printf("----------------------------\nDETAILS\n----------------------------\n");
		printf("Company: %s\n",c1[i].name);
		printf("Model: %s\n",c1[i].model);
		printf("Transmission: %c\n",c1[i].transmission);
		printf("-----------------------------\n");
	}
	free(c1);
}