#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int32_t main()
{
    ll i,j,n,s,maximum=1;
    vector<ll> v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    vector<ll> len;
    for(i=0;i<n;i++){
        len.push_back(1);
    }
    for(i=n-2;i>=0;i--){
        if(v[i]<v[i+1]) len[i]=len[i+1]+1;
        if(len[i]>maximum) maximum=len[i];
    }
    
    cout<<maximum<<endl;
        
        
    return 0;
}
