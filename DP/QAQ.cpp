#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int32_t main()
{
    vector<ll> qr,qs;
    ll len,sum=0,i;
    string arr;
    getline(cin,arr);
    len=arr.length();
    for(i=0;i<len+1;i++){
        qs.push_back(0);
        qr.push_back(0);
    } 
    for(i=0;i<len;i++) qs[i+1]= (arr[i]=='Q')? qs[i]+1: qs[i];
    for(i=len-1;i>=0;i--) qr[i]= (arr[i]=='Q')? qr[i+1]+1: qr[i+1];
    for(i=0;i<len;i++) 
        if(arr[i]=='A') 
            sum+=qr[i]*qs[i];

    cout<<sum<<endl;    
    return 0;
}
