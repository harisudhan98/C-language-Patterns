#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        for(k=i;k<=n-1;k++)                 //for(k=1;k<=n-i;k++)
        {
            printf("\t");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}