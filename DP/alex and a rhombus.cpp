#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,i;
    cin>>n;
    vector<ll> a(n);
    a[0]=1;
    for(i=1;i<n;i++)
        a[i]+=a[i-1] + 4*i;
    cout<<a[i-1]<<endl;    
}
