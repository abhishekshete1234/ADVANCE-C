#include<stdio.h>
	void main()
{
	int a[10][10],r,c,i,j,sum=0;
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
		for(j=0; j<c; j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
				
			}
		}
	}
	printf("sum of diagonal element=%d",sum);
}
