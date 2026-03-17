#include<stdio.h>
int main()
{
    int a[10][10], row, r,c,i,j,sum=0;
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
    printf("Enter the row no to be summed");
    scanf("%d",&row);
    for(j=0;j<c;j++)
    {
        sum=sum+a[row][j];
    }
    printf("Sum of elements in row %d is %d", row, sum);
    return 0;
}