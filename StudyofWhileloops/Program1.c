#include<stdio.h>
int main()
{

    int i=1,sum;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum is %d\n",sum);
    return 0;
}