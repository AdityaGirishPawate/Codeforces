#include <bits/stdc++.h>
 
using namespace std;
#define ll long long 
 
int32_t main()
{
    ll n,sum=0;
    cin>>n;
    sum+=n/100;
    n%=100;
    sum+=n/20;
    n%=20;
    sum+=n/10;
    n%=10;
    sum+=n/5;
    n%=5;
    sum+=n;
    cout<<sum<<endl;
    return 0;
}
