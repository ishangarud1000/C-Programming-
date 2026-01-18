#include<stdio.h>
int main()
{
    int marks,g;
    printf("Enter your marks");
    scanf("%d",&marks);
    g=marks/10;
    switch(g)
    {
    case 9:
    printf("A+");
    break;
    case 8:
    printf("A");
    break;
    case 7:
    printf("B+");
    break;
    case 6:
    printf("B");
    break;
    case 5:
    printf("C");
    break;
    default: printf("F");
    }
    return 0;
}