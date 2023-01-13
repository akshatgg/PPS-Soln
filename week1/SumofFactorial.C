#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t1,t2,n,Y,sum;
    
    scanf("%d",&n);
    for( int f=0;f<n;f++)
    {
       
        int sum=0;
       int j=1;
        scanf("%d",&t1);
    for(int i=1;i<=t1;i++)
    {
        
        j=j*i;
    }
    while(j!=0)
    {
        
        Y=j%10;
        j=j/10;
        sum=sum+Y;
    }
       printf("%d\n",sum);
    }

     
    return 0;
}