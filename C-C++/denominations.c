# include <stdio.h>
int main()
{
	int amt;
	int dn[100];
	printf("Enter amount: Rs. ");
	scanf("%d",&amt);
	
	int arr[]={200,100,50,20,10,5,2,1};
	double red=0;
	
	int i;
	for(i=0;i<8;i++)
	{
		dn[i]=amt/arr[i];
		amt=amt%arr[i];
	}
	
	for(i=0;i<8;i++)
	{
		printf("%d Note(s) of %d.00\n",dn[i],arr[i]);
	}
}