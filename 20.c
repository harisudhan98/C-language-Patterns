#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=1,k;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
                printf("0\t");
            else
                printf("1\t");
        }
        printf("\n");
    }
}