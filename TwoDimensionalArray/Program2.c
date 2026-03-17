#include<stdio.h>
int main()
{
    int m,n,p,q,c,d,k,first[10][10],second[10][10],multiply[10][10];
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &p, &q);
    priintf("Enter elements of first matrix:\n");
    for(c=0;c<m;c++)
        for(d=0;d<n;d++)
            scanf("%d",&first[c][d]);
    printf("Enter elements of second matrix:\n");        
    for(c=0;c<p;c++)
        for(d=0;d<q;d++)
            scanf("%d",&second[c][d]);
    if(n!=p)
    {
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    }
    else
    {
        for(c=0;c<m;c++)
        {
            for(d=0;d<q;d++)
            {
                int sum=0;
                for(k=0;k<p;k++)
                {
                    sum+=first[c][k]*second[k][d];
                }
                multiply[c][d]=sum;
            }
        }
        printf("Resultant Matrix:\n");
        for(c=0;c<m;c++)
        {
            for(d=0;d<q;d++)
            {
                printf("%d\t",multiply[c][d]);
            }
            printf("\n");
        }
    }
}