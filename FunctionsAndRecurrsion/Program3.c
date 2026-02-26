#include<stdio.h>
int helloworld();
int main()
{
    helloworld();
    return 0;
}
int helloworld()
{
    int i;
    for(i=1;i<=10;i++)
    {
    printf("Hello, World!\n");
    }
}