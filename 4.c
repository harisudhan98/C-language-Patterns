#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   if(i<=5)
        {
            for(k=i;k<=n/2-1;k++)
            {
                 printf("\t");
            }
            for(j=1;j<=i;j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
        if(i>=6)
        {
            for(k=i-(n/2);k>=1;k--)
            {
                printf("\t");
            }
            for(j=n-i;j>=1;j--)
            {
                printf("*\t");
            }
            printf("\n");
        }  
    }
    getch();
}
    