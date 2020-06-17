#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;
#define INF 1e6
int32_t main() {
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n,0);
        for(auto &it:a) cin>>it;
        vector<int> cnt(2*k+1,0);
        for (int i = 0; i < n/2; ++i) {
            ++cnt[a[i]+a[n-i-1]];
        }
        vector<int> pre(2*k+2,0);
        for (int j = 0; j < n/2; ++j) {
            pre[min(a[j],a[n-j-1])+1]++;
            pre[max(a[j],a[n-j-1])+k+1]--;
        }
        for (int l = 1; l <= 2*k+1; ++l) {
            pre[l]+=pre[l-1];
        }
        int ans=1e9;
        for (int m = 2; m <=2*k ; ++m) {
            ans=min(ans,pre[m]-cnt[m]+(n/2 - pre[m])*2);
        }
        cout<<ans<<endl;
    }

    return 0;
}


