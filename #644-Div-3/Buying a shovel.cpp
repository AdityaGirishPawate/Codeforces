
#include <bits/stdc++.h>

using namespace std;
#define ll long long 

void divisors(ll n,vector<ll> &a,vector<ll> &b);

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a;
        vector<ll> b;
        int flag=0;
        divisors(n,a,b);
        for(auto i=b.begin();i!=b.end();i++){
            if(k>= *i)
            {
                cout<<n/(*i)<<endl;
                flag=1;
                break;
            }
        }
        if(flag)
            continue;
        for(auto i=a.rbegin();i!=a.rend();i++){
            if(k>= *i)
            {
                cout<<n/(*i)<<endl;
                break;
            }
        }
        
    }

    return 0;
}

void divisors(ll n,vector<ll> &a,vector<ll> &b)
{
    ll i;
    for(i=1;i<=sqrt(n);i++){
        if(n%i==0){
            a.push_back(i);
            b.push_back(n/i);
        }
    }
    
}






