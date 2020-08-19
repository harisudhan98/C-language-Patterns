#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        if(i>1)
        {
            for(k=n-i+1;k<n;k++)
            {
                printf("%d\t",k);
            }
        }
        for(j=i;j<=n;j++)
        {
            printf("%d\t",n);
        }
        printf("\n");
    }
    getch();
}
