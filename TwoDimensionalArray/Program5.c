#include<stdio.h>
int main()
{
   int arr[10][10],r,c,i,j,sum=0;
   printf("Enter the number of rows and columns of matrix");
   scanf("%d%d",&r,&c);
   printf("Enter the elements in the array");
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
        sum=sum+arr[i][j];
    }
}
    printf("Sum of all elements of matrix is %d", sum);
    return 0;
}
   