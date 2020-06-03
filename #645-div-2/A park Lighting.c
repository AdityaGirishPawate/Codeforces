
#include <stdio.h>
#include<stdlib.h>
#include <math.h>

long long int light(long long int n,long long int m);

int main()
{
    long long int t,i,j;
    scanf("%lld",&t);
    long long int* ans=(long long int *)malloc(t*sizeof(long long int));
    for(i=0;i<t;i++)
    {
        long long int n,m;
        scanf("%lld%lld",&n,&m);
    
        ans[i]=light(n,m);
        
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",ans[i]);
    }
}

long long int light(long long int n,long long int m)
{
    long long int max=0;
    if(n%2==0||m%2==0)
    {
        return (n*m)/2;
    }
    else
    {
        if(((n-1)*m)/2+(m+1)/2 > ((m-1)*n)/2+(n+1)/2)
            return ((m-1)*n)/2+(n+1)/2;
        else
            return ((n-1)*m)/2+(m+1)/2;
    }
}
