#include<stdio.h>
int cube(int n);
int main()
{
    printf("Cube of a number is : %d", cube(4));
    return 0;
}
int cube(int n)
{
    return n*n*n;
}