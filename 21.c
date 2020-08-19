#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,temp,l;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j==i)
                printf("*\t");
            else    
                printf("%d\t",j);
        }
        printf("\n");
    }
}