#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5;
#define INF 1e9

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<k+(k-1)/(n-1)<<endl;
    }
    return 0;
}


