#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,l=1,result;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("\t");
        }
        for(j=1;j<=i*2-1;j++)
        {
            result=l*l;
            printf("%d\t",result);
            l++;
        }
        printf("\n");
    }
}