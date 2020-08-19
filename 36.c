#include<stdio.h> 
void main()
{
    int i,j,temp=0;
    char sn;
    printf("Enter the character:");
    scanf("%c",&sn);
    for(i=sn;i>='A';i--)
    {   
        for(j=sn;j>='A'+temp;j--)
        {  
           printf("%c",i);
        }
        temp++;
        printf("\n");
    }
}