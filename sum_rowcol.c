#include<stdio.h>
	void main()
{
	int a[10][10],r,c,i,j,sumrow=0,sumcol=0;
	printf("enter column and rows :");
	scanf("%d%d",&r,&c);
	
	printf("enter element :\n");

    for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0; i<r; i++)
	{
		sumrow=0;
		for(j=0; j<c; j++)
		{
			sumrow=sumrow+a[i][j];
			
		}
		printf("sum of row%d=%d\n",i,sumrow);
    }
    for(j=0; j<c; j++)
	{
		sumcol=0;
		for(i=0; i<r; i++)
		{
			sumcol=sumcol+a[i][j];
			
		}
		printf("sum of row%d=%d\n",i,sumcol);
    }
}
		
	
