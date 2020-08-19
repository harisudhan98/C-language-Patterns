#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)     
    {                                                      
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    /*Same program in while loop:
    int i=1,j=1,n;                 //since we are using while loop we should do intialition along with declaration
    printf("Enter no.of rows:");
    scanf("%d",&n);
    while(i<=n)
    {
        while(j<=i)
        {
            printf("*\t");
            j++;
        }
        printf("\n");
        i++;
    }*/
}