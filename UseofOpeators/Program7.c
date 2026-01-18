#include<stdio.h>
int main(){
    int a=35,b=30,c=40,max;
    max=a>b && a>c?a:b>c && b>a?b:c;
    printf("Max number is %d",max);
    return 0;
}