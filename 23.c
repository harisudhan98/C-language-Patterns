#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,l;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        for(k=1;k<=(n-i)*2;k++)
        {
            printf("\t");
        }
        for(l=j-1;l>=1;l--)
        {
            printf("%d\t",l);
        }
        printf("\n");
    }
}