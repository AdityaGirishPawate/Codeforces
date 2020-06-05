
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    
    while(t--){
        ll n,k,i,j,bound=0;
        bool flag;
        cin>>n;
        vector<ll> vec[n];
        for(i=0;i<n;i++){
            string l;
            cin>>l;
            for(j=0;j<n;j++){
                if(l[j]=='0')
                    vec[i].push_back(0);
                else
                    vec[i].push_back(1);
            }
            
        }
        for(i=0;i<n;i++){
            flag=0;
            for(j=0;j<n;j++){
                if(i==n-1 || j==n-1){
                    if(vec[i][j]==1)
                        bound++;    
                }
                else{
                    if(vec[i][j] && vec[i+1][j]==0 && vec[i][j+1]==0 ){
                        flag=1;
                        break;
                    }
                    
                }
                if(flag) break;
            }
            if(flag) break;
                
            
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    

    return 0;
}
