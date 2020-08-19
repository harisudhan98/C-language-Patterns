#include<stdio.h> 
void main()
{
    int i,j;
    char sn;
    printf("Enter the character:");
    scanf("%c",&sn);
    for(i=sn;i>='A';i--)
    {   
        for(j=i;j>='A';j--)
        {  
           printf("%c",j);
        }
        printf("\n");
    }
}