#include <bits/stdc++.h>

using namespace std;
#define ll long long int
ll uns(ll n,ll m);

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        cout<<uns(n,m)<<endl;
    }

    return 0;
}

ll uns(ll n,ll m){
    ll x,z,temp,rem,ans;
    if(n==1)
        return 0;
    x=n/2;
    z=n-x;
    temp=m/x;
    rem=m%x;
    if(n%2)
        return 2*m-temp;
    else
        return 2*m;
}
