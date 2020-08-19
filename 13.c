#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)     
    {   
        for(k=i;k<=n-1;k++)                 //for(k=1;k<=n-i;k++)
        {
            printf("\t");
        }  
        printf("1\t\t");
        if(i>2)
        {
            for(j=1;j<=i-2;j++)
            {
                printf("%d\t\t",i-1);
            }
        }
        if(i>1) 
        {
            printf("1");
        }
        printf("\n");
    }
    getch();
}