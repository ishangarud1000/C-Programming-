#include<stdio.h>
int main()
{
    char ch;
    printf("Enter white space character");
    ch=getchar();
    switch(ch)
    {
        case '\n' :
        printf("You have entered newline");
        break;
        case '\t':
        printf("You have entered tab");
        break;
        case ' ':
        printf("You have entered space");
        break;
        default:
        printf("Invalid Input");
    }
    return 0;
}