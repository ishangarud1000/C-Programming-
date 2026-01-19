#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);
    if(marks>=40)
    {
        if(marks>=50 && marks<60)
        {
            printf("Second Class");
        }
        else if(marks>=60 && marks<75)
        {
            printf("First Class");
        }
        else 
        {
            printf("Distinction");
        }
    }
    else 
    {
        printf("Failed");
    }
    return 0;
}