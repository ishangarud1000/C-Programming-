#include<stdio.h>
int main()
{
    int grade;
    printf("Enter the grade of the student");
    scanf("%d",&grade);
    if(50<=grade && grade<60)
    printf("Grade : C");
    else if(60<=grade && grade<70)
    printf("Grade : B");
    else if(70<=grade && grade<80)
    printf("Grade : B+");
    else if(80<=grade && grade<90)
    printf("Grade : A");
    else if(90<=grade && grade<=100)
    printf("Grade : A+");
    else 
    printf("Grade : F");
    return 0;
}