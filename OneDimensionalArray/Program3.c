#include<stdio.h>
int main()
{
    int arr[10],i,sum,avg;
    printf("Enter number of elements in array (max 10): ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/10;
    printf("Average is: %d\n",avg);
return 0;
}