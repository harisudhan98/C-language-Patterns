#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        for(k=i;k>=1;k--)
            {
                printf("\t");
            }
            for(j=n-i+1;j>=1;j--)
            {
                printf("*\t");
            }
            printf("\n");
    }
    getch();
}
