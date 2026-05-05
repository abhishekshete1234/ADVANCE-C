#include<stdio.h>
int main()
{
    int  i, j, c, r, sum = 0;

    printf("Enter rows and columns:\n");
    scanf("%d%d", &r,&c);
    int a[r][c];
    printf("Enter elements:\n");
    for(i=0;i<r; i++)
    
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
            if(a[i][j] % 2 == 0)
            {
                sum = sum + a[i][j];
            }
        }
    }

    printf("Sum of all even elements = %d", sum);
}
