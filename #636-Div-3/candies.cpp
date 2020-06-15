#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=2;
        while(n%(int)(pow(2,k)-1)!=0){
            k++;
        }
        cout<<n/(int)(pow(2,k)-1)<<endl;
    }

    return 0;
}


