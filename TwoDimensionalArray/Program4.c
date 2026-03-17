#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,sum=0;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d%d", &r,&c);
    printf("Enter elements of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum=sum+a[i][i];
    }
    printf("Sum of diagonal elements is %d", sum);
    return 0;
}