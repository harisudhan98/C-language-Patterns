#include<stdio.h> 
void main()
{
    int i,j,temp=0;
    char en;
    printf("Enter the end character:");
    scanf("%c",&en);
    //temp=en-65;
    for(i='A';i<=en;i++)
    {   
        for(j='A';j<='A'+temp;j++)
        {  
           printf("%c",j);
        }
        temp++;
        printf("\n");
    }
}