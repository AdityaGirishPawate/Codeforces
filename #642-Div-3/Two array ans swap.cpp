
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
ll ans(ll n,ll m);

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i,temp,sum=0;
        cin>>n>>k;
        std::vector<ll> a;
        std::vector<ll> b;
        for(i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        } 
        for(i=0;i<n;i++){
            cin>>temp;
            b.push_back(temp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(i=0;i<k;i++){
            if(a[i]<b[n-i-1])
                swap(a[i],b[n-i-1]);
        }
        for(i=0;i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;
    }

    return 0;
}

