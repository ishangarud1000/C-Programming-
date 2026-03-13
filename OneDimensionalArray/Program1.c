#include<stdio.h>
int main()
{
    int arr[5],i;
    arr[0]=20;
    arr[1]=30;
    arr[2]=40;      
    arr[3]=50;
    arr[4]=60;
    for(i=0;i<5;i++)
    {
        printf("Elements of array are %d",arr[i]);
        printf("\n");
    }
    return 0;
}