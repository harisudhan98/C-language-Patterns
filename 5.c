#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n,k,l;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)     //for(k=i;k<=n-1;k++)
        {
            printf("\t");
        }
        for(j=i;j<=i*2-1;j++)
        {
            printf("%d\t",j);
        }
        if(i!=1)
        {
            for(l=j-2;l>=i;l--)
            {
                printf("%d\t",l);
            }
        }
        printf("\n");
    } 
}