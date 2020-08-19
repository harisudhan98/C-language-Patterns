#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    int i,n,k,j,m,l,p;
    scanf("%d",&n);
      for(i=n;i>=2;i--)
    {
        if(i==n)
        {
            for(p=1;p<=n*2-1;p++)
                printf("%d ",n);
            printf("\n");
        }
        else
        {
            for(l=n;l>i;l--)
                printf("%d ",l);
            for(k=1;k<=i*2-1;k++)
                printf("%d ",i);
            for(j=i+1;j<=n;j++)
                printf("%d ",j);
            printf("\n");
        }
        
    }
    for(i=1;i<=n;i++)
    {
        for(l=n;l>i;l--)
            printf("%d ",l);
        for(k=1;k<=i*2-1;k++)
            printf("%d ",i);
        for(j=i+1;j<=n;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}
