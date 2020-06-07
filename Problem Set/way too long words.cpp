#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    while(n--){
        string l;
        cin>>l;
        ll len=l.length();
        if(len>10) cout<<l[0]<<len-2<<l[len-1]<<endl;
        else cout<<l<<endl;
    }
    
        
}
