#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i*2-1;j++)
        {
            if(j%2==0)
                printf("*");
            else
                printf("%d",i);
        }
        printf("\n");
    }
    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=i*2-1;j++)
        {
            if(j%2==0)
                printf("*");
            else
                printf("%d",i);
            
        }
        printf("\n");
    }
}

