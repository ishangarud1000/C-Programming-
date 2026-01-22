#include<stdio.h>
int main()
{
    int students;
    printf("Enter the number of students");
    scanf("%d",&students);
    for(int i=1;i<=students;i++)
    {
        int m1,m2,m3,total;
        printf("Enter the marks of Student %d in three subjects",i);
        scanf("%d %d %d",&m1,&m2,&m3);
        total=m1+m2+m3;
        printf("Total Marks obatined by %d student is %d",i,total);
    }
    return 0;
}