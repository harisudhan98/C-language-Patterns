#include<stdio.h>
void main()
{
    int i,j,k,n,a,b;
    printf("Enter two no.s");
    scanf("%d%d",&a,&b);
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
                printf("%d\t",a);
            printf("\n");
        }
        else
        {
            printf("%d\t",a);
            for(j=1;j<=n-2;j++)
                printf("%d\t",b);
            printf("%d\t",a);
            printf("\n");
        }
    }
}