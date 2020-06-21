#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n0,n1,n2;
        cin>>n0>>n1>>n2;
        if(n1==0){
            if(n0==0){
                n2++;
                while(n2--) cout<<1;
                cout<<endl;
            }
            if(n2==0){
                n0++;
                while(n0--) cout<<0;
                cout<<endl;
            }
            continue;
        }
        else{
            string ans;
            for (int i = 0; i <= n1; ++i) {
                if(i&1) ans+="0";
                else ans+="1";
            }
            ans.insert(1,n0,'0');
            ans.insert(0,n2,'1');
            cout<<ans<<endl;
        }
    }
    return 0;
}


