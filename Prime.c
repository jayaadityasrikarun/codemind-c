#include<stdio.h>
int main()
{
    int n,i,factor=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        factor++;
        
    }
    if(factor==2)
    printf("Prime");
    else
    printf("Not Prime");
    
}