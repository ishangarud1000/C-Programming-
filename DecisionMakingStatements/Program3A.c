#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%2==0){
        printf("The entered number is even");
    }
    else{
        printf("The entered number is odd");
    }
    return 0;
}