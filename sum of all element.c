#include<stdio.h>
int main()
{
	int a[5][5],i,j,c,r,sum=0;
	printf("enter rows and column :");
	scanf("%d%d",&r,&c);
	printf("enter element :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for (i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("sum of all element=%d",sum);
	
	
}

