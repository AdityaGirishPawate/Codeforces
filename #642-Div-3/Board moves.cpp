
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
ll ans(ll n,ll m);

int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll i,sum=0;
        for(i=1;i<=(n-1)/2;i++){
            sum+=i*i*8;
        }
        cout<<sum<<endl;
    }

    return 0;
}

