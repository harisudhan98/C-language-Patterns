#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j,n,k,result;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }
}