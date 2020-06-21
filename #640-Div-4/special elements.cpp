#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9
 
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n+1,0);
        for(auto &it:a) cin>>it;
        for(auto k:a){
            b[k]++;
        }
        int count=0;
        for (int j = 0; j < n ; ++j) {
            int sum=0;
            for (int i = j; i < n; ++i) {
                sum+=a[i];
                if(i==j) continue;
                if(sum<=n){
                    count+=b[sum];
                    b[sum]=0;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
