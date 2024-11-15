# include <stdio.h>
int main()
{
	printf("Enter sufficient amount: ");
	float suff,acc;
	int w;
	scanf("%f",&suff);
	
	printf("Enter account balance: ");
	scanf("%f",&acc);
	
	printf("Enter withdrawal amount: ");
	scanf("%d",&w);
	
	if(((acc-(w+0.5))>=suff)&&(w%5==0))
	printf("Possible transaction");
	else
	printf("Not possible");
	
	return 0;
}