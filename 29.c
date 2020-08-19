#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k,tot;
    printf("NOTE:IF YOU ENTER N AS NO.OF ROWS N-1 ROWS WILL BE DISPLAYED");
    printf("Enter no.of rows:");
    scanf("%d",&tot);
    n=tot/2;
    for(i=1;i<=n;i++)
    {   
        for(k=1;k<=n-i;k++)
        {
             printf("\t");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("\t");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    getch();
}
    