#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,temp=1;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=n*2-temp;j++)
        {
            printf("%d\t\t",j);
        }
        temp=temp+2;
        printf("\n");
    }
}