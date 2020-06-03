/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solver(ll a,ll k);
ll maxD(ll a);
ll minD(ll a);

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,k;
        cin>>a>>k;
        cout<<solver(a,k-1)<<endl;
    }
}
ll solver(ll a,ll k)
{
    ll i;
    for(i=0;i<k;i++){
        if(minD(a)==0)
            return a;
        a=a+minD(a)*maxD(a);
        
    }
    return a;
}
ll maxD(ll a){
    ll max=0;
    while(a){
        if(max<=a%10)
            max=a%10;
        a/=10;
    }
    return max;
}
ll minD(ll a){
    ll min=10;
    while(a){
        if(min>a%10)
            min=a%10;
        a/=10;
    }
    return min;
}
