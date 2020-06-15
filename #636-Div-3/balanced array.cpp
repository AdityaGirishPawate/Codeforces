#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;

int32_t main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if(!(n%4)){
            cout<<"YES"<<endl;
            for (int i = 1; i <= n/2; ++i) {
                cout << 2 * i << " ";
            }
            for (int j = 0; j < n/2-1; ++j) {
                cout<<2*j+1<<" ";
            }
            cout<<n+n/2-1<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}


