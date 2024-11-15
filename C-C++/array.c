#include <stdio.h>
int	main()
{
	/*int disp[2][3];
	int i, j;
	for(i=0; i<2; i++) 
	{  
		for(j=0;j<3;j++) 
		{
			printf("Enter value for disp[%d][%d]:", i, j);
			scanf("%d", &disp[i][j]);
		} 
	}
	printf("Two Dimensional array  elements:\n");
	for(i=0; i<2; i++) 
	{  
		for(j=0;j<3;j++) 
		{
			printf("%d ", disp[i][j]);  
		}	
		printf("\n");
	}*/
	
	int b[2][4];
	int i,j;	
	
	for(i=0; i<2; i++) 
	{  
		for(j=0;j<4;j++) 
		{
			printf("Enter value for disp[%d][%d]:", i, j);
			scanf("%d", &b[i][j]);
		} 
	}
	
	int c;
	printf("Enter element to find: ");
	scanf("%d",&c);
	
	int count=0;
	
	for(i=0; i<2; i++) 
	{  
		for(j=0;j<4;j++) 
		{
			if(b[i][j]==c)
				count++;
		}	
		printf("\n");
	}
	
	if(c>0)
	printf("Element found");
	else
	printf("Element not found");
	
	return 0; 
}