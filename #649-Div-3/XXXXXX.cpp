#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(auto &it:a) cin>>it;
        vector<int> f(n,0),b(n,0);
        f[0]=a[0];
        b[0]=a[n-1];
        for (int i = 1; i < n; ++i) {
            f[i]= f[i-1]+a[i];
            b[i]= b[i-1]+a[n-i-1];
        }
        //for(auto k:f) cout<<k<<" ";
        //cout<<endl;
        //for(auto k:b) cout<<k<<" ";
        if(f[n-1]%x!=0) cout<<n<<endl;
        else {
            int minimum=INF;
            for (int i = 0; i < n; ++i) {
                if(f[i]%x!=0){
                    minimum=min(minimum,i+1);
                    break;
                }
            }
            for (int j = 0; j <n; ++j) {
                if(b[j]%x!=0){
                    minimum=min(minimum,j+1);
                    break;
                }
            }
            if(n-minimum < 0) cout<<-1<<endl;
            else cout<<n-minimum<<endl;
        }
    }

    return 0;
}


