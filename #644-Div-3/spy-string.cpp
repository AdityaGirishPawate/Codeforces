

#include <bits/stdc++.h>
#define ll long long

using namespace std;
void solve();
int main()
{
    int t;
    cin>>t;
    while(t--){
        
        solve();
    }
    return 0;
}
void solve()
{
    ll i,n,m,j,k;
        string ans,comp,req;
        char save,d;
        cin>>n>>m;
        std::vector<string> vec(n);
        for(i=0;i<n;i++){
            cin>>vec[i];
        }
        ans=vec[0];
        bool flag2=0;
        for(i=0;i<m;i++){
            save=ans[i];
            
            for(d='a';d<='z';d++){
                ans[i]=d;
                bool flag=1;
                for(j=0;j<n;j++){
                    ll err=0;
                    comp=vec[j];
                    for(k=0;k<m;k++){
                        if(ans[k]!=comp[k])
                            err++;
                    }
                    if(err>1){
                        flag=0;
                        break;
                    }
                }
                if(flag){
                    cout<<ans<<endl;
                    return;
                }
                
            }
            
            ans[i]=save;   
                
        }
        cout<<-1<<endl;
}



















