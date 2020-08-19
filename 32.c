#include<stdio.h> 
void main()
{
    int i,j;
    char n;
    printf("Enter the character\n");
    scanf("%c",&n);
    for(i='A';i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
           printf("%c",j);
        }
        printf("\n");
    }
}