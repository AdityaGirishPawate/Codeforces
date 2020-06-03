#include <bits/stdc++.h>
 
using namespace std;
#define ll long long 
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll i,n,temp;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        for(i=0;i<n-1;i++)
            arr[i]=arr[i+1]-arr[i];
        arr[i]=9999;
        cout<<*min_element(arr.begin(),arr.end())<<endl;
    }
 
    return 0;
}
