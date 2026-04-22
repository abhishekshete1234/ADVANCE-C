#include<stdio.h>
void main()
{
	int a[10][10],i,j,r,c,max,min;
	printf("enter rows :");
	scanf("%d",&r);
	printf("enter column :");
	scanf("%d",&c);
	for(i=0; i<r; i++)
	{
	    for(j=0; j<c; j++)
	    {
	  	  scanf("%d",&a[i][j]);
        }
    }
    min=a[0][0];
    for(i=0; i<r; i++)
    {
    	for(j=0; j<c; j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				
			}
        }   	
	}
	max=a[0][0];
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("\nminimum=%d",min);
	printf("\nmaximum%d",max);
	
	
	
		
	
}
