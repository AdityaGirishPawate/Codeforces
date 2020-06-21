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
        for(auto &k:a) cin>>k;
        vector<int> b;
        for (int i = 0; i < n; ++i) {
            if(i==0||i==n-1||(a[i-1]<a[i])!=(a[i]<a[i+1]))
                b.push_back(a[i]);
        }
        cout<<b.size()<<endl;
        for(auto k:b) cout<<k<<" ";
        cout<<endl;

    }

    return 0;
}


