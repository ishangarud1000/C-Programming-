#include<stdio.h>
int main()
{
    int arr[10],i,n,max,min;
    printf("Enter number of elements in array (max 10): ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i],min)
        {
            min=arr[i];
        }
    }
printf("Maximum element is: %d\n",max);
printf("Minimum element is: %d\n",min);
return 0;
}