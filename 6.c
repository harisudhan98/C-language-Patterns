#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,temp=1;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",temp);
            temp++;
        }
        printf("\n");
    }
}