/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include <math.h>

long long int granny(long long int n,long long int* a);

int main()
{
    long long int t,i,j;
    scanf("%lld",&t);
    long long int* ans=(long long int *)malloc(t*sizeof(long long int));
    for(i=0;i<t;i++)
    {
        long long int n;
        scanf("%lld",&n);
        long long int* a=(long long int *)malloc(n*sizeof(long long int));
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        ans[i]=granny(n,a);
        
        
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",ans[i]+1);
    }
}

long long int granny(long long int n,long long int* a)
{
    long long int max=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    max+=1;
    long long int* c=(long long int *)malloc(max*sizeof(long long int));
    for(i=0;i<max;i++)
        c[i]=0;
    for(i=0;i<n;i++)
        c[a[i]]++;
    for(i=0;i<max-1;i++)
		c[i+1]+=c[i];
    for(i=max-1;i>=0;i--)
    {
        if(c[i]>=i)
            return c[i];
    }
}






















