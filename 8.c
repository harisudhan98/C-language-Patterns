#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        for(j=n;j>=i;j--)
        {
            printf("*\t");
        }
        printf("\n");
    }
}