#include<stdio.h> 
void main()
{
    int i,j,k,temp=0;
    char sn;
    printf("Enter the character:");
    scanf("%c",&sn);
    for(i=sn;i>='A';i--)
    {   
        for(k=0;k<=temp;k++)
        {
            printf("\t");
        }
        temp++;
        for(j='A';j<=i;j++)
        {  
           printf("%c\t",j);
        }
        for(j=i;j>='A';j--)
        {
            printf("%c\t",j);
        }
        printf("\n");
    }
}