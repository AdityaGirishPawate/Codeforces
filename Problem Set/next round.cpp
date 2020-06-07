#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k,i,count=0;
    cin>>n>>k;
    vector<ll> a(n);
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0)
            count++;
    }
    cout<<count<<endl;
    
        
}
