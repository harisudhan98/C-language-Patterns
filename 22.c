#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,temp,l;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("\t");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}