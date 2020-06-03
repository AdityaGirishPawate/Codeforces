/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll i,n,temp,oc=0,ec=0;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
            if(temp%2)
                oc++;
            else
                ec++;
        }
        if(oc%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        sort(arr.begin(),arr.end());
        int flag=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]==1){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag)
            continue;
        cout<<"NO"<<endl;
    }

    return 0;
}
